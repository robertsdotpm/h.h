/*
    web.h - BSD LICENSE - Andreas Fredriksson

ABOUT:
    This is a web server intended for debugging tools inside a
    program with a continously running main loop. It's intended to be used when
    all you need is something tiny and performance isn't a key concern.
    NOTE: this is a single header port of Andreas Fredrikss
    Webby(https://github.com/deplinenoise/webby).

    Features
    - Single header library to be easy to embed into your code.
    - No dynamic memory allocations -- server memory is completely fixed
    - No threading, all I/O and serving happens on the calling thread
    - Supports socket keep-alives
    - Supports the 100-Continue scheme for file uploading
    - Basic support for WebSockets is available.

    Because request/response I/O is synchronous on the calling thread, performance
    will suffer when you are serving data. For the use-cases wby is intended for,
    this is fine. You can still run wby in a background thread at your
    discretion if this is a problem.

DEFINES:
    WBY_IMPLEMENTATION
        Generates the implementation of the library into the included file.
        If not provided the library is in header only mode and can be included
        in other headers or source files without problems. But only ONE file
        should hold the implementation.

    WBY_STATIC
        The generated implementation will stay private inside implementation
        file and all internal symbols and functions will only be visible inside
        that file.

    WBY_ASSERT
    WBY_USE_ASSERT
        If you define WBY_USE_ASSERT without defining ASSERT web.h
        will use assert.h and asssert(). Otherwise it will use your assert
        method. If you do not define WBY_USE_ASSERT no additional checks
        will be added. This is the only C standard library function used
        by web.

    WBY_UINT_PTR
        If your compiler is C99 you do not need to define this.
        Otherwise, web will try default assignments for them
        and validate them at compile time. If they are incorrect, you will
        get compile errors and will need to define them yourself.

        You can define this to 'size_t' if you use the standard library,
        otherwise it needs to be able to hold the maximum addressable memory
        space. If you do not define this it will default to unsigned long.


LICENSE: (BSD)
    Copyright (c) 2016, Andreas Fredriksson, Micha Mettke
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this
       list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
    ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

CONTRIBUTORS:
    Andreas Fredriksson (implementation)
    Micha Mettke (single header conversion)

USAGE:
    Request handling
        When you configure the server, you give it a function pointer to your
        dispatcher. The dispatcher is called by wby when a request has been fully
        read into memory and is ready for processing. The socket the request came in on
        has then been switched to blocking mode, and you're free to read any request
        data using `wby_read()` (if present, check `content_length`) and then write
        your response.
        There are two ways to generate a response; explicit size or chunked.

    When you know the size of the data
        When you know in advance how big the response is going to be, you should pass
        that size in bytes to `wby_response_begin()` (it will be sent as the
        Content-Length header). You then call `wby_write()` to push that data out, and
        finally `wby_response_end()` to finalize the response and prepare the socket
        for a new request.

    When the response size is dynamic
        Sometimes you want to generate an arbitrary amount of text in the response, and
        you don't know how much that will be. Rather than buffering everything in RAM,
        you can use chunked encoding. First call `wby_response_begin()` as normal, but
        pass it -1 for the content length. This triggers sending the
        `Transfer-Encoding: chunked` header. You then call `wby_write()` as desired
        until the response is complete. When you're done, call `wby_response_end()` to finish up.

EXAMPLES:
    for a actual working example please look inside tests/wby_test.c */
#if 0
/* request and websocket handling callback */
static int dispatch(struct wby_con *connection, void *pArg);
static int websocket_connect(struct wby_con *conn, void *pArg);
static void websocket_connected(struct wby_con *con, void *pArg);
static int websocket_frame(struct wby_con *conn, const struct wby_frame *frame, void *pArg);
static void websocket_closed(struct wby_con *connection, void *pArg);

int main(int argc, const char * argv[])
{
    /* setup config */
    struct wby_config config;
    memset(config, 0, sizeof(config));
    config.address = "127.0.0.1";
    config.port = 8888;
    config.connection_max = 8;
    config.request_buffer_size = 2048;
    config.io_buffer_size = 8192;
    config.dispatch = dispatch;
    config.ws_connect = websocket_connect;
    config.ws_connected = websocket_connected;
    config.ws_frame = websocket_frame;
    config.ws_closed = websocket_closed;

    /* compute and allocate needed memory and start server */
    struct wby_server server;
    size_t needed_memory;
    wby_server_init(&server, &config, &needed_memory);
    void *memory = calloc(needed_memory, 1);
    wby_server_start(&server, memory);
    while (1) {
        wby_server_update(&server);

    }
    wby_server_stop(&server);
    free(memory);
}
#endif
 /* ===============================================================
 *
 *                          HEADER
 *
 * =============================================================== */
#ifndef WBY_H_
#define WBY_H_

#include <stdarg.h>
#include <cstdarg>

#ifdef __cplusplus
extern "C" {
#endif


#define WBY_API extern

#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 19901L)
#include <stdint.h>


#ifndef WBY_UINT_PTR
#define WBY_UINT_PTR uintptr_t
#endif
#else
#ifndef WBY_UINT_PTR


#if defined(__i386__) || defined(EMSCRIPTEN) || (!defined(_WIN64) && defined(_WIN32))
#define WBY_UINT_PTR unsigned long
#else
#define WBY_UINT_PTR unsigned long long
#endif

#endif
#endif





typedef unsigned char wby_byte;
typedef size_t wby_size;
// typedef WBY_UINT_PTR wby_size;
typedef WBY_UINT_PTR wby_ptr;

#define WBY_OK (0)
#define WBY_FLAG(x) (1 << (x))

#ifndef WBY_MAX_HEADERS
#define WBY_MAX_HEADERS 64
#endif

struct wby_header {
    const char *name;
    const char *value;
};

/* A HTTP request. */
struct wby_request {
    const char *method;
    /* The method of the request, e.g. "GET", "POST" and so on */
    const char *uri;
    /* The URI that was used. */
    const char *http_version;
    /* The used HTTP version */
    const char *query_params;
    /* The query parameters passed in the URL, or NULL if none were passed. */
    int content_length;
    /* The number of bytes of request body that are available via WebbyRead() */
    int header_count;
    /* The number of headers */
    struct wby_header headers[WBY_MAX_HEADERS];
    /* Request headers */
};

/* Connection state, as published to the serving callback. */
struct wby_con {
    struct wby_request request;
    /* The request being served. Read-only. */
    void *user_data;
    /* User data. Read-write. wby doesn't care about this. */
};

struct server_state {
	int quit;
	unsigned frame_counter;
	struct wby_con* conn[MAX_WSCONN];
	int conn_count;
};

struct wby_frame {
    wby_byte flags;
    wby_byte opcode;
    wby_byte header_size;
    wby_byte padding_;
    wby_byte mask_key[4];
    int payload_length;
};

enum wby_websock_flags {
    WBY_WSF_FIN    = WBY_FLAG(0),
    WBY_WSF_MASKED = WBY_FLAG(1)
};

enum wby_websock_operation {
    WBY_WSOP_CONTINUATION    = 0,
    WBY_WSOP_TEXT_FRAME      = 1,
    WBY_WSOP_BINARY_FRAME    = 2,
    WBY_WSOP_CLOSE           = 8,
    WBY_WSOP_PING            = 9,
    WBY_WSOP_PONG            = 10
};

/* Configuration data required for starting a server. */
typedef void(*wby_log_f)(const char *msg);
struct wby_config {
    void *userdata;
    /* userdata which will be passed */
    const char *address;
    /* The bind address. Must be a textual IP address. */
    unsigned short port;
    /* The port to listen to. */
    unsigned int connection_max;
    /* Maximum number of simultaneous connections. */
    wby_size request_buffer_size;
    /* The size of the request buffer. This must be big enough to contain all
    * headers and the request line sent by the client. 2-4k is a good size for
    * this buffer. */
    wby_size io_buffer_size;
    /* The size of the I/O buffer, used when writing the reponse. 4k is a good
    * choice for this buffer.*/
    wby_log_f log;
    /* Optional callback function that receives debug log text (without newlines). */
    int(*dispatch)(struct wby_con *con, void *userdata, void *server);
    /* Request dispatcher function. This function is called when the request
    * structure is ready.
    * If you decide to handle the request, call wby_response_begin(),
    * wby_write() and wby_response_end() and then return 0. Otherwise, return a
    * non-zero value to have Webby send back a 404 response. */
    int(*ws_connect)(struct wby_con*, void *userdata);
    /*WebSocket connection dispatcher. Called when an incoming request wants to
    * update to a WebSocket connection.
    * Return 0 to allow the connection.
    * Return 1 to ignore the connection.*/
    void (*ws_connected)(struct wby_con*, void *userdata);
    /* Called when a WebSocket connection has been established.*/
    void (*ws_closed)(struct wby_con*, void *userdata);
    /*Called when a WebSocket connection has been closed.*/
    int (*ws_frame)(struct wby_con*, const struct wby_frame *frame, void *userdata);
    /*Called when a WebSocket data frame is incoming.
    * Call wby_read() to read the payload data.
    * Return non-zero to close the connection.*/
};

struct wby_connection;
struct wby_server {
    struct wby_config config;
    /* server configuration */
    wby_size memory_size;
    /* minimum required memory */
    wby_socket socket;
    /* server socket */
    wby_size con_count;
    /* number of active connection */
    struct wby_connection *con;
    /* connections */
#ifdef _WIN32
    int windows_socket_initialized;
    /* whether WSAStartup had to be called on Windows */
#endif
};

void wby_init(struct wby_server*, const struct wby_config*,
                            wby_size *needed_memory);
/*  this function clears the server and calculates the needed memory to run
    Input:
    -   filled server configuration data to calculate the needed memory
    Output:
    -   needed memory for the server to run
*/
int wby_start(struct wby_server*, void *memory);
/*  this function starts running the server in the specificed memory space. Size
 *  must be at least big enough as determined in the wby_server_init().
    Input:
    -   allocated memory space to create the server into
*/
WBY_API void wby_update(struct wby_server*);
/* updates the server by being called frequenctly (at least once a frame) */
void wby_stop(struct wby_server*);
/* stops and shutdown the server */
WBY_API int wby_response_begin(struct wby_con*, int status_code, int content_length,
                                    const struct wby_header headers[], int header_count);
/*  this function begins a response
    Input:
    -   HTTP status code to send. (Normally 200).
    -   size in bytes you intend to write, or -1 for chunked encoding
    -   array of HTTP headers to transmit (can be NULL of header_count == 0)
    -   number of headers in the array
    Output:
    -   returns 0 on success, non-zero on error.
*/
WBY_API void wby_response_end(struct wby_con*);
/*  this function finishes a response. When you're done wirting the response
 *  body, call this function. this makes sure chunked encoding is terminated
 *  correctly and that the connection is setup for reuse. */
WBY_API int wby_read(struct wby_con*, void *ptr, wby_size len);
/*  this function reads data from the request body. Only read what the client
 *  has priovided (via content_length) parameter, or you will end up blocking
 *  forever.
    Input:
    - pointer to a memory block that will be filled
    - size of the memory block to fill
*/
WBY_API int wby_write(struct wby_con*, const void *ptr, wby_size len);
/*  this function writes a response data to the connection. If you're not using
 *  chunked encoding, be careful not to send more than the specified content
 *  length. You can call this function multiple times as long as the total
 *  number of bytes matches up with the content length.
    Input:
    - pointer to a memory block that will be send
    - size of the memory block to send
*/
int wby_frame_begin(struct wby_con*, int opcode);
/*  this function begins an outgoing websocket frame */
int wby_frame_end(struct wby_con*);
/*  this function finishes an outgoing websocket frame */
int wby_find_query_var(const char *buf, const char *name, char *dst, wby_size dst_len);
/*  this function is a helper function to lookup a query parameter given a URL
 *  encoded string. Returns the size of the returned data, or -1 if the query
 *  var wasn't found. */
WBY_API const char* wby_find_header(struct wby_con*, const char *name);
/*  this convenience function to find a header in a request. Returns the value
 *  of the specified header, or NULL if its was not present. */

 WBY_API void
 wby_dbg(wby_log_f log, const char *fmt, ...);



#ifdef __cplusplus
}
#endif
#endif /* WBY_H_ */
/* ===============================================================
 *
 *                      IMPLEMENTATION
 *
 * ===============================================================*/
#ifdef WBY_IMPLEMENTATION



#endif /* WBY_IMPLEMENTATION */



struct wby_buffer {
    wby_size used;
    /* current buffer size */
    wby_size max;
    /* buffer capacity */
    wby_byte *data;
    /* pointer inside a global buffer */
};

struct wby_connection {
    struct wby_con public_data;
    unsigned short flags;
    unsigned short state;

    wby_socket socket;
    wby_log_f log;

    wby_size request_buffer_size;
    struct wby_buffer header_buf;
    struct wby_buffer io_buf;
    wby_size io_buffer_size;

    int header_body_left;
    int io_data_left;
    int continue_data_left;
    int body_bytes_read;

    struct wby_frame ws_frame;
    wby_byte ws_opcode;
    wby_size blocking_count;
};


void wby_config(const char *address, unsigned int port, struct server_state* state, struct wby_config* config,
	int(*dispatch)(struct wby_con* con, void* userdata, void* server));

char *get_post_buf(struct wby_con *connection, struct wby_server *svr);

StrMap *post_json_eq_to_json(char *post_content);

unsigned int serve_static_file(const char *www_root_path, struct wby_con *connection);

