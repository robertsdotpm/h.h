static int http_internal_parse_url( char const* url, char* address, size_t address_capacity, char* port,
    size_t port_capacity, char const** resource )
    {
    // make sure url starts with http://
    if( strncmp( url, "http://", 7 ) != 0 ) return 0;
    url += 7; // skip http:// part of url

    size_t url_len = strlen( url );


    // find end of address part of url
    char const* address_end = strchr( url, ':' );
    if( !address_end ) address_end = strchr( url, '/' );
    if( !address_end ) address_end = url + url_len;

    // extract address
    size_t address_len = (size_t)( address_end - url );
    if( address_len >= address_capacity ) return 0;
    memcpy( address, url, address_len );
    address[ address_len ] = 0;

    // check if there's a port defined
    char const* port_end = address_end;
    if( *address_end == ':' )
        {
        ++address_end;
        port_end = strchr( address_end, '/' );
        if( !port_end ) port_end = address_end + strlen( address_end );
        size_t port_len = (size_t)( port_end - address_end );
        if( port_len >= port_capacity ) return 0;
        memcpy( port, address_end, port_len );
        port[ port_len ] = 0;
        }
    else
        {
        // use default port number 80
        if( port_capacity <= 2 ) return 0;

        strncpy_s(port, 3,  "80", 2);

        }


    *resource = port_end;

    return 1;
    }


HTTP_SOCKET http_internal_connect( char const* address, char const* port )
    {
    // set up hints for getaddrinfo
    struct addrinfo hints;
    memset( &hints, 0, sizeof( hints ) );
    hints.ai_family = AF_UNSPEC; // the Internet Protocol version 4 (IPv4) address family.
    hints.ai_flags = AI_PASSIVE;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;    // Use Transmission Control Protocol (TCP).

    // resolve the server address and port
    struct addrinfo* addri = 0;
    int error = getaddrinfo( address, port, &hints, &addri) ;
    if( error != 0 )
    {
        //printf("Get addr info error %s %s %d %s\r\n", address, port, error, gai_strerror(error));
        //errx(1, "%s", gai_strerror(error));
        return HTTP_INVALID_SOCKET;
    }

    // create the socket
    HTTP_SOCKET sock = socket( addri->ai_family, addri->ai_socktype, addri->ai_protocol );
    if( sock == -1)
        {
        freeaddrinfo( addri );
        return HTTP_INVALID_SOCKET;
        }

    // set socket to nonblocking mode
    #ifdef _WIN32
        u_long nonblocking = 1;
        int res = ioctlsocket( sock, FIONBIO, &nonblocking );
    #else
        int flags = fcntl( sock, F_GETFL, 0 );
        int res = fcntl( sock, F_SETFL, flags | O_NONBLOCK );
    #endif
    if( res == -1 )
        {
        freeaddrinfo( addri );
        #ifdef _WIN32
            closesocket( sock );
        #else
            close( sock );
        #endif
        return HTTP_INVALID_SOCKET;
        }

    // connect to server
    if( connect( sock, addri->ai_addr, addri->ai_addrlen ) == -1 )
        {
        #ifdef _WIN32
            if( WSAGetLastError() != WSAEWOULDBLOCK && WSAGetLastError() != WSAEINPROGRESS )
                {
                freeaddrinfo( addri );
                closesocket( sock );
                return HTTP_INVALID_SOCKET;
                }
        #else
            if( errno != EWOULDBLOCK && errno != EINPROGRESS && errno != EAGAIN )
                {
                freeaddrinfo( addri );
                close( sock );
                return HTTP_INVALID_SOCKET;
                }
        #endif
        }

    freeaddrinfo( addri );
    return sock;
    }


static http_internal_t* http_internal_create( size_t request_data_size, void* memctx )
    {
    http_internal_t* internal = (http_internal_t*) HTTP_MALLOC( memctx, sizeof( http_internal_t ) + request_data_size );

    internal->http.status = HTTP_STATUS_PENDING;
    internal->http.status_code = 0;
    internal->http.response_size = 0;
    internal->http.response_data = NULL;

    internal->memctx = memctx;
    internal->connect_pending = 1;
    internal->request_sent = 0;

    strncpy_s( internal->reason_phrase, 2, "", 1);
    internal->http.reason_phrase = internal->reason_phrase;

    strncpy_s( internal->content_type, 2, "", 1);
    internal->http.content_type = internal->content_type;

    internal->data_size = 0;
    internal->data_capacity = 64 * 1024;
    internal->data = HTTP_MALLOC( memctx, internal->data_capacity );

    internal->request_data = NULL;
    internal->request_data_size = 0;

    return internal;
    }


http_t* http_get( char const* url, void* memctx )
{
    #ifdef _WIN32
        WSADATA wsa_data;
        if( WSAStartup( MAKEWORD( 1, 0 ), &wsa_data ) != 0 ) return NULL;
    #endif

    char address[ 256 ];
    char port[ 16 ];
    char const* resource;

    if( http_internal_parse_url( url, address, sizeof( address ), port, sizeof( port ), &resource ) == 0 )
    {
        //printf("Url val error\r\n");
        return NULL;
    }

    HTTP_SOCKET socket = http_internal_connect( address, port );
    if( socket == HTTP_INVALID_SOCKET )
    {
        //printf("http invalid socket\r\n");
        return NULL;
    }

    http_internal_t* internal = http_internal_create( 0, memctx );
    internal->socket = socket;

    char* request_header;
    size_t request_header_len = 64 + strlen( resource ) + strlen( address ) + strlen( port );
    if( request_header_len < sizeof( internal->request_header ) )
        {
        internal->request_header_large = NULL;
        request_header = internal->request_header;
        }
    else
        {
        internal->request_header_large = (char*) HTTP_MALLOC( memctx, request_header_len + 1 );
        request_header = internal->request_header_large;
        }

    size_t len = strlen(resource) + strlen(address) + strlen(port);
    s_sprintf(request_header, request_header_len + 1, "GET %s HTTP/1.0\r\nHost: %s:%s\r\n\r\n", len, resource, address, port);

    return &internal->http;
    }


http_t* http_post( char const* url, void const* data, size_t size, void* memctx )
    {
    #ifdef _WIN32
        WSADATA wsa_data;
        if( WSAStartup( MAKEWORD( 1, 0 ), &wsa_data ) != 0 ) return 0;
    #endif

    char address[ 256 ];
    char port[ 16 ];
    char const* resource;

    if( http_internal_parse_url( url, address, sizeof( address ), port, sizeof( port ), &resource ) == 0 )
        return NULL;

    HTTP_SOCKET socket = http_internal_connect( address, port );
    if( socket == HTTP_INVALID_SOCKET ) return NULL;

    http_internal_t* internal = http_internal_create( size, memctx );
    internal->socket = socket;

    char* request_header;
    size_t request_header_len = 64 + strlen( resource ) + strlen( address ) + strlen( port );
    if( request_header_len < sizeof( internal->request_header ) )
        {
        internal->request_header_large = NULL;
        request_header = internal->request_header;
        }
    else
        {
        internal->request_header_large = (char*) HTTP_MALLOC( memctx, request_header_len + 1 );
        request_header = internal->request_header_large;
        }

    size_t len = strlen(resource) + strlen(address) + strlen(port);
    s_sprintf(request_header, request_header_len + 1, "POST %s HTTP/1.0\r\nHost: %s:%s\r\nContent-Length: %d\r\n\r\n", len, resource, address, port,
        (int) size);



    internal->request_data_size = size;
    internal->request_data = ( internal + 1 );
    memcpy( internal->request_data, data, size );

    return &internal->http;
    }


http_status_t http_process( http_t* http )
    {
    http_internal_t* internal = (http_internal_t*) http;

    if( http->status == HTTP_STATUS_FAILED ) return http->status;

    if( internal->connect_pending )
        {
        fd_set sockets_to_check;
        FD_ZERO( &sockets_to_check );
        FD_SET( (wby_socket) internal->socket, &sockets_to_check );
        struct timeval timeout; timeout.tv_sec = 0; timeout.tv_usec = 0;
        // check if socket is ready for send
        if( select( (int)( internal->socket + 1 ), NULL, &sockets_to_check, NULL, &timeout ) == 1 )
            {
            int opt = -1;
            socklen_t len = sizeof( opt );
            if( getsockopt( internal->socket, SOL_SOCKET, SO_ERROR, (char*)( &opt ), &len) >= 0 && opt == 0 )
                internal->connect_pending = 0; // if it is, we're connected
            }
        }

    if( internal->connect_pending ) return http->status;

    if( !internal->request_sent )
        {
        char const* request_header = internal->request_header_large ?
            internal->request_header_large : internal->request_header;
        if( send( internal->socket, request_header, (wby_size_cast) strlen( request_header ), 0 ) == -1 )
            {
            http->status = HTTP_STATUS_FAILED;
            return http->status;
            }
        if( internal->request_data_size )
            {
            long int res = send( internal->socket, (char const*)internal->request_data, (wby_size_cast) internal->request_data_size, 0 );
            if( res == -1 )
                {
                http->status = HTTP_STATUS_FAILED;
                return http->status;
                }
            }
        internal->request_sent = 1;
        return http->status;
        }

    // check if socket is ready for recv
    fd_set sockets_to_check;
    FD_ZERO( &sockets_to_check );
    FD_SET( (wby_socket) internal->socket, &sockets_to_check );

    struct timeval timeout; timeout.tv_sec = 0; timeout.tv_usec = 0;
    while( select( (int)( internal->socket + 1 ), &sockets_to_check, NULL, NULL, &timeout ) == 1 )
        {
        char buffer[ 4096 ];
        long int size = recv( internal->socket, buffer, sizeof( buffer ), 0 );
        if( size == -1 )
            {
            http->status = HTTP_STATUS_FAILED;
            return http->status;
            }
        else if( size > 0 )
            {
            size_t min_size = internal->data_size + ((size_t) size + 1);
            if( internal->data_capacity < min_size )
                {
                internal->data_capacity *= 2;
                if( internal->data_capacity < min_size ) internal->data_capacity = min_size;
                void* new_data = HTTP_MALLOC( memctx, internal->data_capacity );
                memcpy( new_data, internal->data, internal->data_size );
                HTTP_FREE( memctx, internal->data );
                internal->data = new_data;
                }
            memcpy( (void*)( ( (uintptr_t) internal->data ) + internal->data_size ), buffer, (size_t) size );
            internal->data_size += (unsigned long) size;
            }
        else if( size == 0 )
            {
            char const* status_line = (char const*) internal->data;

            int header_size = 0;
            char const* header_end = strstr( status_line, "\r\n\r\n" );
            if( header_end )
                {
                header_end += 4;
                header_size = (int)( header_end - status_line );
                }
            else
                {
                http->status = HTTP_STATUS_FAILED;
                return http->status;
                }

            // skip http version
            status_line = strchr( status_line, ' ' );
            if( !status_line )
                {
                http->status = HTTP_STATUS_FAILED;
                return http->status;
                }
            ++status_line;

            // extract status code
            char status_code[ 16 ];
            char const* status_code_end = strchr( status_line, ' ' );
            if( !status_code_end )
                {
                http->status = HTTP_STATUS_FAILED;
                return http->status;
                }
            memcpy( status_code, status_line, (size_t)( status_code_end - status_line ) );
            status_code[ status_code_end - status_line ] = 0;
            status_line = status_code_end + 1;
            http->status_code = atoi( status_code );

            // extract reason phrase
            char const* reason_phrase_end = strstr( status_line, "\r\n" );
            if( !reason_phrase_end )
                {
                http->status = HTTP_STATUS_FAILED;
                return http->status;
                }
            size_t reason_phrase_len = (size_t)( reason_phrase_end - status_line );
            if( reason_phrase_len >= sizeof( internal->reason_phrase ) )
                reason_phrase_len = sizeof( internal->reason_phrase ) - 1;
            memcpy( internal->reason_phrase, status_line, reason_phrase_len );
            internal->reason_phrase[ reason_phrase_len ] = 0;
            status_line = reason_phrase_end + 1;

            // extract content type
            char const* content_type_start = strstr( status_line, "Content-Type: " );
            if( content_type_start )
                {
                content_type_start += strlen( "Content-Type: " );
                char const* content_type_end = strstr( content_type_start, "\r\n" );
                if( content_type_end )
                    {
                    size_t content_type_len = (size_t)( content_type_end - content_type_start );
                    if( content_type_len >= sizeof( internal->content_type ) )
                        content_type_len = sizeof( internal->content_type ) - 1;
                    memcpy( internal->content_type, content_type_start, content_type_len );
                    internal->content_type[ content_type_len ] = 0;
                    }
                }

            http->status =  http->status_code < 300 ? HTTP_STATUS_COMPLETED : HTTP_STATUS_FAILED;
            http->response_data = (void*)( ( (uintptr_t) internal->data ) + ((size_t) header_size) );
            http->response_size = internal->data_size - ((size_t) header_size);

            // add an extra zero after the received data, but don't modify the size, so ascii results can be used as
            // a zero terminated string. the size returned will be the string without this extra zero terminator.
            ( (char*)http->response_data )[ http->response_size ] = 0;
            return http->status;
            }
        }

    return http->status;
    }


void http_release( http_t* http )
    {
    http_internal_t* internal = (http_internal_t*) http;
    #ifdef _WIN32
        closesocket( internal->socket );
    #else
        close( internal->socket );
    #endif

    if( internal->request_header_large) HTTP_FREE( memctx, internal->request_header_large );
    HTTP_FREE( memctx, internal->data );
    HTTP_FREE( memctx, internal );
    #ifdef _WIN32
        WSACleanup();
    #endif
    }

int http_get_response(http_t* request)
{
    if( !request )
    {
        return HTTP_STATUS_FAILED;
    }

    http_status_t status = HTTP_STATUS_PENDING;
    int prev_size = -1;
    while( status == HTTP_STATUS_PENDING )
    {
        status = http_process( request );
        if( prev_size != (int) request->response_size )
        {
            //printf( "%d byte(s) received.\n", (int) request->response_size );
            prev_size = (int) request->response_size;
        }
    }

    if( status == HTTP_STATUS_FAILED )
    {
        //printf( "HTTP request failed (%d): %s.\n", request->status_code, request->reason_phrase );
        http_release( request );
        return HTTP_STATUS_FAILED;
    }


    return HTTP_STATUS_COMPLETED;
}

char *url_get_contents(const char *url, double timeout)
{
    clock_t begin;
    double time_spent;
    http_t *request = http_get( url, NULL );
    begin = clock();
    if(request != NULL)
    {
        // Download content to buffer.
        http_status_t status = HTTP_STATUS_PENDING;
        int prev_size = -1;
        while( status == HTTP_STATUS_PENDING )
        {
            status = http_process( request );
            if( prev_size != (int) request->response_size )
            {
                //printf( "%d byte(s) received.\n", (int) request->response_size );
                prev_size = (int) request->response_size;
            }

            time_spent = (double)(clock() - begin) / CLOCKS_PER_SEC;
            if(time_spent >= timeout)
            {
                status = HTTP_STATUS_FAILED;
                break;
            }
        }

        // Display buffer.
        if( status == HTTP_STATUS_FAILED )
        {
            //printf( "HTTP request failed (%d): %s.\n", request->status_code, request->reason_phrase );
            return NULL;
        }
        else
        {
            //printf("HTTP got content -- see bellow for how to access it\r\n");
            //printf( "\nContent type: %s\n\n%s\n", request->content_type, (char const*)request->response_data );

            // Copy req data to new buf
            // This is done so the http struct can be released and only the data can be returned. 
            const char *req_data = (const char *) request->response_data;
            size_t data_size = strlen(req_data);
            char *buf = (char *) malloc(data_size + 1);
            memcpy(buf, req_data, data_size);
            buf[data_size] = '\0';

            // Release HTTP struct and return content.
            http_release( request );
            return buf;
        }

        // Release buffer.
        http_release( request );
    }

    return NULL;
}

