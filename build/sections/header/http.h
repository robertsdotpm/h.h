#ifdef _WIN32
    #define _CRT_NONSTDC_NO_DEPRECATE
    #define _CRT_SECURE_NO_WARNINGS
    #pragma warning( disable: 4127 ) // conditional expression is constant
    #pragma warning( disable: 4255 ) // 'function' : no function prototype given: converting '()' to '(void)'
    #pragma warning( disable: 4365 ) // 'action' : conversion from 'type_1' to 'type_2', signed/unsigned mismatch
    #pragma warning( disable: 4574 ) // 'Identifier' is defined to be '0': did you mean to use '#if identifier'?
    #pragma warning( disable: 4668 ) // 'symbol' is not defined as a preprocessor macro, replacing with '0' for 'directive'
    #pragma warning( disable: 4706 ) // assignment within conditional expression
    //#include <winsock2.h>

    #include <string.h>
    #include <stdio.h>
    #define HTTP_SOCKET SOCKET
    #define HTTP_INVALID_SOCKET INVALID_SOCKET
#else
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/socket.h>
    #include <unistd.h>
    #include <errno.h>
    #include <fcntl.h>
    #include <netdb.h>
    #define HTTP_SOCKET int
    #define HTTP_INVALID_SOCKET -1
#endif

#ifndef HTTP_MALLOC
    #define _CRT_NONSTDC_NO_DEPRECATE
    #define _CRT_SECURE_NO_WARNINGS
    #include <stdlib.h>
    #define HTTP_MALLOC( ctx, size ) ( malloc( size ) )
    #define HTTP_FREE( ctx, ptr ) ( free( ptr ) )
#endif


#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#include <stddef.h> // for size_t

typedef enum http_status_t
    {
    HTTP_STATUS_PENDING,
    HTTP_STATUS_COMPLETED,
    HTTP_STATUS_FAILED,
    } http_status_t;

typedef struct http_t
    {
    http_status_t status;
    int status_code;
    char const* reason_phrase;
    char const* content_type;
    size_t response_size;
    void* response_data;
    } http_t;

http_t* http_get( char const* url, void* memctx );
http_t* http_post( char const* url, void const* data, size_t size, void* memctx );

http_status_t http_process( http_t* http );

void http_release( http_t* http );

typedef struct http_internal_t
    {
    /* keep this at the top!*/
    http_t http;
    /* because http_internal_t* can be cast to http_t*. */

    void* memctx;
    HTTP_SOCKET socket;
    int connect_pending;
    int request_sent;
    char address[ 256 ];
    char request_header[ 256 ];
    char* request_header_large;
    void* request_data;
    size_t request_data_size;
    char reason_phrase[ 1024 ];
    char content_type[ 256 ];
    size_t data_size;
    size_t data_capacity;
    void* data;
    } http_internal_t;

int http_get_response(http_t* request);
