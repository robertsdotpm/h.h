#include <stdarg.h>
#include <cstdarg>

typedef int wby__check_ptr_size[(sizeof(void*) == sizeof(WBY_UINT_PTR)) ? 1 : -1];
#define WBY_LEN(a) (sizeof(a)/sizeof((a)[0]))
#define WBY_UNUSED(a) ((void)(a))

#ifdef WBY_USE_ASSERT
#ifndef WBY_ASSERT
#include <assert.h>
#define WBY_ASSERT(expr) assert(expr)
#endif
#else
#define WBY_ASSERT(expr)
#endif


#define WBY_SOCK(s) (s)
#define WBY_INTERN static
#define WBY_GLOBAL static
#define WBY_STORAGE static

/* ===============================================================
 *                          UTIL
 * ===============================================================*/


WBY_API void
wby_dbg(wby_log_f log, const char *fmt, ...)
{
	#include <stdarg.h>
	#include <cstdarg>

    char buffer[1024];
    va_list args;
    if (!log) return;

    va_start(args, fmt);
    vsnprintf(buffer, sizeof buffer, fmt, args);
    va_end(args);
    buffer[(sizeof buffer)-1] = '\0';
    log(buffer);
}

WBY_INTERN int
wb_peek_request_size(const wby_byte *buf, int len)
{
    int i;
    int max = len - 3;
    for (i = 0; i < max; ++i) {
        if ('\r' != buf[i + 0]) continue;
        if ('\n' != buf[i + 1]) continue;
        if ('\r' != buf[i + 2]) continue;
        if ('\n' != buf[i + 3]) continue;
        /* OK; we have CRLFCRLF which indicates the end of the header section */
        return i + 4;
    }
    return -1;
}

WBY_INTERN char*
wby_skipws(char *p)
{
    for (;;) {
        char ch = *p;
        if (' ' == ch || '\t' == ch) ++p;
        else break;
    }
    return p;
}

#define WBY_TOK_SKIPWS WBY_FLAG(0)
WBY_INTERN int
wby_tok_inplace(char *buf, const char* separator, char *tokens[], int max, int flags)
{
    char *b = buf;
    char *e = buf;
    int token_count = 0;
    int separator_len = (int)strlen(separator);
    while (token_count < max) {
        if (flags & WBY_TOK_SKIPWS)
            b = wby_skipws(b);
        if (NULL != (e = strstr(b, separator))) {
            int len = (int) (e - b);
            if (len > 0)
                tokens[token_count++] = b;
            *e = '\0';
            b = e + separator_len;
        } else {
            tokens[token_count++] = b;
            break;
        }
    }
    return token_count;
}

WBY_INTERN wby_size
wby_make_websocket_header(wby_byte buffer[10], wby_byte opcode,
    int payload_len, int fin)
{
    buffer[0] = (wby_byte)((fin ? 0x80 : 0x00) | opcode);
    if (payload_len < 126) {
        buffer[1] = (wby_byte)(payload_len & 0x7f);
        return 2;
    } else if (payload_len < 65536) {
        buffer[1] = 126;
        buffer[2] = (wby_byte)(payload_len >> 8);
        buffer[3] = (wby_byte)payload_len;
        return 4;
    } else {
        buffer[1] = 127;
        /* Ignore high 32-bits. I didn't want to require 64-bit types and typdef hell in the API. */
        buffer[2] = buffer[3] = buffer[4] = buffer[5] = 0;
        buffer[6] = (wby_byte)(payload_len >> 24);
        buffer[7] = (wby_byte)(payload_len >> 16);
        buffer[8] = (wby_byte)(payload_len >> 8);
        buffer[9] = (wby_byte)payload_len;
        return 10;
    }
}

WBY_INTERN int
wby_read_buffered_data(int *data_left, struct wby_buffer* buffer,
    char **dest_ptr, wby_size *dest_len)
{
    int offset, read_size;
    int left = *data_left;
    int len;
    if (left == 0)
        return 0;

    len = (int) *dest_len;
    offset = (int)buffer->used - left;
    read_size = (len > left) ? left : len;
    memcpy(*dest_ptr, buffer->data + offset, (wby_size)read_size);

    (*dest_ptr) += read_size;
    (*dest_len) -= (wby_size) read_size;
    (*data_left) -= read_size;
    return read_size;
}

/* ---------------------------------------------------------------
 *                          SOCKET
 * ---------------------------------------------------------------*/
#ifdef _WIN32
//#include <winsock2.h>
//#pragma comment(lib, "Ws2_32.lib")





typedef int wby_socklen;
typedef char wby_sockopt;

#if defined(__GNUC__)
#define WBY_ALIGN(x) __attribute__((aligned(x)))
#else
#define WBY_ALIGN(x) __declspec(align(x))
#endif


#ifdef __APPLE__
	#define WBY_INVALID_SOCKET -1
#else
	#define WBY_INVALID_SOCKET 0
#endif

#define snprintf _snprintf

WBY_INTERN int
wby_socket_error(void)
{
    return WSAGetLastError();
}

#if !defined(__GNUC__)
WBY_INTERN int
strcasecmp(const char *a, const char *b)
{
    return _stricmp(a, b);
}

WBY_INTERN int
strncasecmp(const char *a, const char *b, wby_size len)
{
    return _strnicmp(a, b, len);
}
#endif

WBY_INTERN int
wby_socket_set_blocking(wby_socket socket, int blocking)
{
    u_long val = !blocking;
    return ioctlsocket(socket, FIONBIO, &val);
}

WBY_INTERN int
wby_socket_is_valid(wby_socket socket)
{

	return (socket >= 1);

}

WBY_INTERN void
wby_socket_close(wby_socket socket)
{
    closesocket(socket);
}

WBY_INTERN int
wby_socket_is_blocking_error(int error)
{
    return WSAEWOULDBLOCK == error;
}

#else /* UNIX */

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <strings.h>


typedef socklen_t wby_socklen;
typedef int wby_sockopt;

#define WBY_ALIGN(x) __attribute__((aligned(x)))
#define WBY_INVALID_SOCKET (0)

WBY_INTERN int
wby_socket_error(void)
{
    return errno;
}

WBY_INTERN int
wby_socket_is_valid(wby_socket socket)
{
	#ifdef __APPLE__
    	return (socket >= 0);
	#else
		return (socket >= 1);
	#endif
}

WBY_INTERN void
wby_socket_close(wby_socket socket)
{
    close((int) socket);
}

WBY_INTERN int
wby_socket_is_blocking_error(int error)
{
    return (EAGAIN == error);
}

WBY_INTERN int
wby_socket_set_blocking(wby_socket socket, int blocking)
{
    int flags = fcntl((int) socket, F_GETFL, 0);
    if (flags < 0) return flags;
    flags = blocking ? (flags & ~O_NONBLOCK) : (flags | O_NONBLOCK);
    return fcntl((int) socket, F_SETFL, flags);
}
#endif

WBY_INTERN int
wby_socket_config_incoming(wby_socket socket)
{
    wby_sockopt off = 0;
    int err;
    if ((err = wby_socket_set_blocking(socket, 0)) != WBY_OK) return err;
    setsockopt((wby_socket_cast) socket, SOL_SOCKET, SO_LINGER, (const char*) &off, sizeof(int));
    return 0;
}

WBY_INTERN int
wby_socket_send(wby_socket socket, const wby_byte *buffer, int size)
{
    while (size > 0) {
        long err = send((wby_socket_cast) socket, (const char*)buffer, (wby_size_cast) size, 0);
        if (err <= 0) return 1;
        buffer += err;
        size -= (int)err;
    }
    return 0;
}

/* Read as much as possible without blocking while there is buffer space. */
enum {WBY_FILL_OK, WBY_FILL_ERROR, WBY_FILL_FULL};
WBY_INTERN int
wby_socket_recv(wby_socket socket, struct wby_buffer *buf, wby_log_f log)
{
    long err;
    int buf_left;
    for (;;) {
        buf_left = (int) ((int) buf->max - (int)buf->used);
        wby_dbg(log, "buffer space left = %d", buf_left);
        if (buf_left == 0)
            return WBY_FILL_FULL;

        /* Read what we can into the current buffer space. */
        err = recv((wby_socket_cast) socket, (char*)buf->data + buf->used, (wby_size_cast) buf_left, 0);
        if (err < 0) {
            int sock_err = wby_socket_error();
            if (wby_socket_is_blocking_error(sock_err)) {
                return WBY_FILL_OK;
            } else {
                /* Read error. Give up. */
                wby_dbg(log, "read error %d - connection dead", sock_err);
                return WBY_FILL_ERROR;
            }
        } else if (err == 0) {
          /* The peer has closed the connection. */
          wby_dbg(log, "peer has closed the connection");
          return WBY_FILL_ERROR;
        } else buf->used += (wby_size)err;
    }
}

WBY_INTERN int
wby_socket_flush(wby_socket socket, struct wby_buffer *buf)
{
    if (buf->used > 0){
        if (wby_socket_send(socket, buf->data, (int)buf->used) != WBY_OK)
            return 1;
    }
    buf->used = 0;
    return 0;
}

/* ---------------------------------------------------------------
 *                          URL
 * ---------------------------------------------------------------*/
/* URL-decode input buffer into destination buffer.
 * 0-terminate the destination buffer. Return the length of decoded data.
 * form-url-encoded data differs from URI encoding in a way that it
 * uses '+' as character for space, see RFC 1866 section 8.2.1
 * http://ftp.ics.uci.edu/pub/ietf/html/rfc1866.txt
 *
 * This bit of code was taken from mongoose.
 */
WBY_INTERN wby_size
wby_url_decode(const char *src, wby_size src_len, char *dst, wby_size dst_len,
    int is_form_url_encoded)
{
    int a, b;
    wby_size i, j;
    #define HEXTOI(x) (isdigit(x) ? x - '0' : x - 'W')
    for (i = j = 0; i < src_len && j < dst_len - 1; i++, j++) {
        if (src[i] == '%' &&
            isxdigit(*(const wby_byte*)(src + i + 1)) &&
            isxdigit(*(const wby_byte*)(src + i + 2)))
        {
            a = tolower(*(const wby_byte*)(src + i + 1));
            b = tolower(*(const wby_byte*)(src + i + 2));
            dst[j] = (char)((HEXTOI(a) << 4) | HEXTOI(b));
            i += 2;
        } else if (is_form_url_encoded && src[i] == '+') {
            dst[j] = ' ';
        } else dst[j] = src[i];
    }
    #undef HEXTOI
    dst[j] = '\0'; /* Null-terminate the destination */
    return j;
}

/* Pulled from mongoose */
int
wby_find_query_var(const char *buf, const char *name, char *dst, wby_size dst_len)
{
    const char *p, *e, *s;
    wby_size name_len;
    int len;
    wby_size buf_len = strlen(buf);

    name_len = strlen(name);
    e = buf + buf_len;
    len = -1;
    dst[0] = '\0';

    /* buf is "var1=val1&var2=val2...". Find variable first */
    for (p = buf; p != NULL && p + name_len < e; p++) {
        if ((p == buf || p[-1] == '&') && p[name_len] == '=' &&
            strncasecmp(name, p, name_len) == 0)
        {
            /* Point p to variable value */
            p += name_len + 1;
            /* Point s to the end of the value */
            s = (const char *) memchr(p, '&', (wby_size)(e - p));
            if (s == NULL) s = e;
            WBY_ASSERT(s >= p);
            /* Decode variable into destination buffer */
            if ((wby_size) (s - p) < dst_len)
                len = (int)wby_url_decode(p, (wby_size)(s - p), dst, dst_len, 1);
            break;
        }
    }
    return len;
}

/* ---------------------------------------------------------------
 *                          BASE64
 * ---------------------------------------------------------------*/
#define WBY_BASE64_QUADS_BEFORE_LINEBREAK 19

WBY_INTERN wby_size
wby_base64_bufsize(wby_size input_size)
{
    wby_size triplets = (input_size + 2) / 3;
    wby_size base_size = 4 * triplets;
    wby_size line_breaks = 2 * (triplets / WBY_BASE64_QUADS_BEFORE_LINEBREAK);
    wby_size null_termination = 1;
    return base_size + line_breaks + null_termination;
}

WBY_INTERN int
wby_base64_encode(char* output, wby_size output_size,
    const wby_byte *input, wby_size input_size)
{
    wby_size i = 0;
    int line_out = 0;
    WBY_STORAGE const char enc[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789+/=";
    if (output_size < wby_base64_bufsize(input_size))
        return 1;

    while (i < input_size) {
        unsigned int idx_0, idx_1, idx_2, idx_3;
        unsigned int i0;

        i0 = (unsigned int)(input[i]) << 16; i++;
        i0 |= (unsigned int)(i < input_size ? input[i] : 0) << 8; i++;
        i0 |= (i < input_size ? input[i] : 0); i++;

        idx_0 = (i0 & 0xfc0000) >> 18; i0 <<= 6;
        idx_1 = (i0 & 0xfc0000) >> 18; i0 <<= 6;
        idx_2 = (i0 & 0xfc0000) >> 18; i0 <<= 6;
        idx_3 = (i0 & 0xfc0000) >> 18;

        if (i - 1 > input_size) idx_2 = 64;
        if (i > input_size) idx_3 = 64;

        *output++ = enc[idx_0];
        *output++ = enc[idx_1];
        *output++ = enc[idx_2];
        *output++ = enc[idx_3];

        if (++line_out == WBY_BASE64_QUADS_BEFORE_LINEBREAK) {
          *output++ = '\r';
          *output++ = '\n';
        }
    }
    *output = '\0';
    return 0;
}

/* ---------------------------------------------------------------
 *                          SHA1
 * ---------------------------------------------------------------*/
struct wby_sha1 {
    unsigned int state[5];
    unsigned int msg_size[2];
    wby_size buf_used;
    wby_byte buffer[64];
};

WBY_INTERN unsigned int
wby_sha1_rol(unsigned int value, unsigned int bits)
{
    return ((value) << bits) | (value >> (32 - bits));
}

WBY_INTERN void
wby_sha1_hash_block(unsigned int state[5], const wby_byte *block)
{
    int i;
    unsigned int a, b, c, d, e;
    unsigned int w[80];

    /* Prepare message schedule */
    for (i = 0; i < 16; ++i) {
        w[i] =  (((unsigned int)block[(i*4)+0]) << 24) |
                (((unsigned int)block[(i*4)+1]) << 16) |
                (((unsigned int)block[(i*4)+2]) <<  8) |
                (((unsigned int)block[(i*4)+3]) <<  0);
    }

    for (i = 16; i < 80; ++i)
        w[i] = wby_sha1_rol(w[i-3] ^ w[i-8] ^ w[i-14] ^ w[i-16], 1);
    /* Initialize working variables */
    a = state[0]; b = state[1]; c = state[2]; d = state[3]; e = state[4];

    /* This is the core loop for each 20-word span. */
    #define SHA1_LOOP(start, end, func, constant) \
        for (i = (start); i < (end); ++i) { \
            unsigned int t = wby_sha1_rol(a, 5) + (func) + e + (constant) + w[i]; \
            e = d; d = c; c = wby_sha1_rol(b, 30); b = a; a = t;}

    SHA1_LOOP( 0, 20, ((b & c) ^ (~b & d)),           0x5a827999)
    SHA1_LOOP(20, 40, (b ^ c ^ d),                    0x6ed9eba1)
    SHA1_LOOP(40, 60, ((b & c) ^ (b & d) ^ (c & d)),  0x8f1bbcdc)
    SHA1_LOOP(60, 80, (b ^ c ^ d),                    0xca62c1d6)
    #undef SHA1_LOOP

    /* Update state */
    state[0] += a; state[1] += b; state[2] += c; state[3] += d; state[4] += e;
}

WBY_INTERN void
wby_sha1_init(struct wby_sha1 *s)
{
    s->state[0] = 0x67452301;
    s->state[1] = 0xefcdab89;
    s->state[2] = 0x98badcfe;
    s->state[3] = 0x10325476;
    s->state[4] = 0xc3d2e1f0;

    s->msg_size[0] = 0;
    s->msg_size[1] = 0;
    s->buf_used = 0;
}

WBY_INTERN void
wby_sha1_update(struct wby_sha1 *s, const void *data_, wby_size size)
{
    const char *data = (const char*)data_;
    unsigned int size_lo;
    unsigned int size_lo_orig;
    wby_size remain = size;

    while (remain > 0) {
        wby_size buf_space = sizeof(s->buffer) - s->buf_used;
        wby_size copy_size = (remain < buf_space) ? remain : buf_space;
        memcpy(s->buffer + s->buf_used, data, copy_size);

        s->buf_used += copy_size;
        data += copy_size;
        remain -= copy_size;

        if (s->buf_used == sizeof(s->buffer)) {
            wby_sha1_hash_block(s->state, s->buffer);
            s->buf_used = 0;
        }
    }

    size_lo = size_lo_orig = s->msg_size[1];
    size_lo += (unsigned int)(size * 8);
    if (size_lo < size_lo_orig)
        s->msg_size[0] += 1;
    s->msg_size[1] = size_lo;
}

WBY_INTERN void
wby_sha1_final(wby_byte digest[20], struct wby_sha1 *s)
{
    wby_byte zero = 0x00;
    wby_byte one_bit = 0x80;
    wby_byte count_data[8];
    int i;

    /* Generate size data in bit endian format */
    for (i = 0; i < 8; ++i) {
        unsigned int word = s->msg_size[i >> 2];
        count_data[i] = (wby_byte)(word >> ((3 - (i & 3)) * 8));
    }

    /* Set trailing one-bit */
    wby_sha1_update(s, &one_bit, 1);
    /* Emit null padding to to make room for 64 bits of size info in the last 512 bit block */
    while (s->buf_used != 56)
        wby_sha1_update(s, &zero, 1);

    /* Write size in bits as last 64-bits */
    wby_sha1_update(s, count_data, 8);
    /* Make sure we actually finalized our last block */
    WBY_ASSERT(s->buf_used == 0);

    /* Generate digest */
    for (i = 0; i < 20; ++i) {
        unsigned int word = s->state[i >> 2];
        wby_byte byte = (wby_byte) ((word >> ((3 - (i & 3)) * 8)) & 0xff);
        digest[i] = byte;
    }
}

/* ---------------------------------------------------------------
 *                          CONNECTION
 * ---------------------------------------------------------------*/
#define WBY_WEBSOCKET_VERSION "13"
WBY_GLOBAL const char wby_continue_header[] = "HTTP/1.1 100 Continue\r\n\r\n";
WBY_GLOBAL const wby_size wby_continue_header_len = sizeof(wby_continue_header) - 1;
WBY_GLOBAL const char wby_websocket_guid[] = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
WBY_GLOBAL const wby_size wby_websocket_guid_len = sizeof(wby_websocket_guid) - 1;
WBY_GLOBAL const wby_byte wby_websocket_pong[] = { 0x80, WBY_WSOP_PONG, 0x00 };
WBY_GLOBAL const struct wby_header wby_plain_text_headers[]={{"Content-Type","text/plain"}};

enum wby_connection_flags {
    WBY_CON_FLAG_ALIVE                  = WBY_FLAG(0),
    WBY_CON_FLAG_FRESH_CONNECTION       = WBY_FLAG(1),
    WBY_CON_FLAG_CLOSE_AFTER_RESPONSE   = WBY_FLAG(2),
    WBY_CON_FLAG_CHUNKED_RESPONSE       = WBY_FLAG(3),
    WBY_CON_FLAG_WEBSOCKET              = WBY_FLAG(4)
};

enum wby_connection_state {
    WBY_CON_STATE_REQUEST,
    WBY_CON_STATE_SEND_CONTINUE,
    WBY_CON_STATE_SERVE,
    WBY_CON_STATE_WEBSOCKET
};



WBY_INTERN int
wby_connection_set_blocking(struct wby_connection *conn)
{
    if (conn->blocking_count == 0) {
        if (wby_socket_set_blocking(WBY_SOCK(conn->socket), 1) != WBY_OK) {
            wby_dbg(conn->log, "failed to switch connection to blocking");
            conn->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return -1;
        }
    }
    ++conn->blocking_count;
    return 0;
}

WBY_INTERN int
wby_connection_set_nonblocking(struct wby_connection *conn)
{
    wby_size count = conn->blocking_count;
    if ((conn->flags & WBY_CON_FLAG_ALIVE) != 0 && count == 1) {
        if (wby_socket_set_blocking(WBY_SOCK(conn->socket), 0) != WBY_OK) {
            wby_dbg(conn->log, "failed to switch connection to non-blocking");
            conn->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return -1;
        }
    }
    conn->blocking_count = count - 1;
    return 0;
}

WBY_INTERN void
wby_connection_reset(struct wby_connection *conn, wby_size request_buffer_size,
    wby_size io_buffer_size)
{
    conn->header_buf.used = 0;
    conn->header_buf.max = request_buffer_size;
    conn->io_buf.used = 0;
    conn->io_buf.max = io_buffer_size;
    conn->header_body_left = 0;
    conn->io_data_left = 0;
    conn->continue_data_left = 0;
    conn->body_bytes_read = 0;
    conn->state = WBY_CON_STATE_REQUEST;
    conn->public_data.user_data = NULL;
    conn->blocking_count = 0;
}

WBY_INTERN void
wby_connection_close(struct wby_connection* connection)
{
    if (    wby_socket_is_valid( WBY_SOCK(connection->socket) )    ) {
        wby_socket_close(WBY_SOCK(connection->socket));
		#ifdef __APPLE__
	    	connection->socket = -1;
		#else
			connection->socket = WBY_INVALID_SOCKET;
		#endif
    }
    connection->flags = 0;
}

WBY_INTERN int
wby_connection_setup_request(struct wby_connection *connection, int request_size)
{
    char* lines[WBY_MAX_HEADERS + 2];
    int line_count;
    char* tok[16];
    char* query_params;
    int tok_count;

    int i;
    int header_count;
    char *buf = (char*) connection->header_buf.data;
    struct wby_request *req = &connection->public_data.request;

    /* Null-terminate the request envelope by overwriting the last CRLF with 00LF */
    buf[request_size - 2] = '\0';
    /* Split header into lines */
    line_count = wby_tok_inplace(buf, "\r\n", lines, WBY_LEN(lines), 0);
    header_count = line_count - 2;
    if (line_count < 1 || header_count > (int) WBY_LEN(req->headers))
        return 1;

    /* Parse request line */
    tok_count = wby_tok_inplace(lines[0], " ", tok, WBY_LEN(tok), 0);
    if (3 != tok_count) return 1;

    req->method = tok[0];
    req->uri = tok[1];
    req->http_version = tok[2];
    req->content_length = 0;

    /* See if there are any query parameters */
    if ((query_params = (char*) strchr(req->uri, '?')) != NULL) {
        req->query_params = query_params + 1;
        *query_params = '\0';
    } else req->query_params = NULL;

    {
        /* Decode the URI in place */
        wby_size uri_len = strlen(req->uri);
        wby_url_decode(req->uri, uri_len, (char*)req->uri, uri_len + 1, 1);
    }

    /* Parse headers */
    for (i = 0; i < header_count; ++i) {
        tok_count = wby_tok_inplace(lines[i + 1], ":", tok, 2, WBY_TOK_SKIPWS);
        if (tok_count != 2) return 1;
        req->headers[i].name = tok[0];
        req->headers[i].value = tok[1];

        if (!strcasecmp("content-length", tok[0])) {
            req->content_length = (int)strtoul(tok[1], NULL, 10);
            wby_dbg(connection->log, "request has body; content length is %d", req->content_length);
        } else if (!strcasecmp("transfer-encoding", tok[0])) {
            wby_dbg(connection->log, "cowardly refusing to handle Transfer-Encoding: %s", tok[1]);
            return 1;
        }
    }
    req->header_count = header_count;
    return 0;
}

WBY_INTERN int
wby_connection_send_websocket_upgrade(struct wby_connection* connection)
{
    const char *hdr;
    struct wby_sha1 sha;
    wby_byte digest[20];
    char output_digest[64];
    struct wby_header headers[3];
    struct wby_con *conn = &connection->public_data;
    if ((hdr = wby_find_header(conn, "Sec-WebSocket-Version")) == NULL) {
        wby_dbg(connection->log, "Sec-WebSocket-Version header not present");
        return 1;
    }
    if (strcmp(hdr, WBY_WEBSOCKET_VERSION)) {
        wby_dbg(connection->log,"WebSocket version %s not supported (we only do %s)",
                hdr, WBY_WEBSOCKET_VERSION);
        return 1;
    }
    if ((hdr = wby_find_header(conn, "Sec-WebSocket-Key")) == NULL) {
        wby_dbg(connection->log, "Sec-WebSocket-Key header not present");
        return 1;
    }
    /* Compute SHA1 hash of Sec-Websocket-Key + the websocket guid as required by
    * the RFC.
    *
    * This handshake is bullshit. It adds zero security. Just forces me to drag
    * in SHA1 and create a base64 encoder.
    */
    wby_sha1_init(&sha);
    wby_sha1_update(&sha, hdr, strlen(hdr));
    wby_sha1_update(&sha, wby_websocket_guid, wby_websocket_guid_len);
    wby_sha1_final(&digest[0], &sha);
    if (wby_base64_encode(output_digest, sizeof output_digest, &digest[0], sizeof(digest)) != WBY_OK)
        return 1;

    headers[0].name  = "Upgrade";
    headers[0].value = "websocket";
    headers[1].name  = "Connection";
    headers[1].value = "Upgrade";
    headers[2].name  = "Sec-WebSocket-Accept";
    headers[2].value = output_digest;
    wby_response_begin(&connection->public_data, 101, 0, headers, WBY_LEN(headers));
    wby_response_end(&connection->public_data);
    return 0;
}

WBY_INTERN int
wby_connection_push(struct wby_connection *conn, const void *data_, int len)
{
    struct wby_buffer *buf = &conn->io_buf;
    const wby_byte* data = (const wby_byte*)data_;
    if (conn->state != WBY_CON_STATE_SERVE) {
        wby_dbg(conn->log, "attempt to write in non-serve state");
        return 1;
    }
    if (len == 0)
        return wby_socket_flush(WBY_SOCK(conn->socket), buf);

    while (len > 0) {
        int buf_space = (int)buf->max - (int)buf->used;
        int copy_size = len < buf_space ? len : buf_space;
        memcpy(buf->data + buf->used, data, (wby_size)copy_size);
        buf->used += (wby_size)copy_size;

        data += copy_size;
        len -= copy_size;
        if (buf->used == buf->max) {
            if (wby_socket_flush(WBY_SOCK(conn->socket), buf) != WBY_OK)
                return 1;
            if ((wby_size)len >= buf->max)
                return wby_socket_send(WBY_SOCK(conn->socket), data, len);
        }
    }
    return 0;
}

/* ---------------------------------------------------------------
 *                          CON/REQUEST
 * ---------------------------------------------------------------*/
WBY_INTERN int
wby_con_discard_incoming_data(struct wby_con* conn, int count)
{
    while (count > 0) {
        char buffer[1024];
        int read_size = (int)(((wby_size)count > sizeof(buffer)) ?
            sizeof(buffer) : (wby_size)count);
        if (wby_read(conn, buffer, (wby_size)read_size) != WBY_OK)
            return -1;
        count -= read_size;
    }
    return 0;
}

WBY_API const char*
wby_find_header(struct wby_con *conn, const char *name)
{
    int i, count;
    for (i = 0, count = conn->request.header_count; i < count; ++i) {
        if (!strcasecmp(conn->request.headers[i].name, name))
            return conn->request.headers[i].value;
    }
    return NULL;
}

WBY_INTERN int
wby_con_is_websocket_request(struct wby_con* conn)
{
    const char *hdr;
    if ((hdr = wby_find_header(conn, "Connection")) == NULL) return 0;
    if (strcasecmp(hdr, "Upgrade")) return 0;
    if ((hdr = wby_find_header(conn, "Upgrade")) == NULL) return 0;
    if (strcasecmp(hdr, "websocket")) return 0;
    return 1;
}

WBY_INTERN int
wby_scan_websocket_frame(struct wby_frame *frame, const struct wby_buffer *buf)
{
    wby_byte flags = 0;
    unsigned int len = 0;
    unsigned int opcode = 0;
    wby_byte* data = buf->data;
    wby_byte* data_max = data + buf->used;

    int i;
    int len_bytes = 0;
    int mask_bytes = 0;
    wby_byte header0, header1;
    if (buf->used < 2)
        return -1;

    header0 = *data++;
    header1 = *data++;
    if (header0 & 0x80)
        flags |= WBY_WSF_FIN;
    if (header1 & 0x80) {
        flags |= WBY_WSF_MASKED;
        mask_bytes = 4;
    }

    opcode = (unsigned int) (header0 & 0xf);
    len = (unsigned int) (header1 & 0x7f);
    if (len == 126)
        len_bytes = 2;
    else if (len == 127)
        len_bytes = 8;
    if (data + len_bytes + mask_bytes > data_max)
        return -1;

    /* Read big endian length from length bytes (if greater than 125) */
    len = len_bytes == 0 ? len : 0;
    for (i = 0; i < len_bytes; ++i) {
        /* This will totally overflow for 64-bit values. I don't care.
         * If you're transmitting more than 4 GB of data using Webby,
         * seek help. */
        len <<= 8;
        len |= *data++;
    }

    /* Read mask word if present */
    for (i = 0; i < mask_bytes; ++i)
        frame->mask_key[i] = *data++;
    frame->header_size = (wby_byte) (data - buf->data);
    frame->flags = flags;
    frame->opcode = (wby_byte) opcode;
    frame->payload_length = (int)len;
    return 0;
}

int
wby_frame_begin(struct wby_con *conn_pub, int opcode)
{
    struct wby_connection *conn = (struct wby_connection*)conn_pub;
    conn->ws_opcode = (wby_byte) opcode;
    /* Switch socket to blocking mode */
    return wby_connection_set_blocking(conn);
}

int
wby_frame_end(struct wby_con *conn_pub)
{
    wby_byte header[10];
    wby_size header_size;
    struct wby_connection *conn = (struct wby_connection*) conn_pub;
    header_size = wby_make_websocket_header(header, conn->ws_opcode, 0, 1);
    if (wby_socket_send(WBY_SOCK(conn->socket), header, (int) header_size) != WBY_OK)
        conn->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
    /* Switch socket to non-blocking mode */
    return wby_connection_set_nonblocking(conn);
}

WBY_API int
wby_read(struct wby_con *conn, void *ptr_, wby_size len)
{
    struct wby_connection* conn_prv = (struct wby_connection*)conn;
    char *ptr = (char*) ptr_;
    int count;

    int start_pos = conn_prv->body_bytes_read;
    if (conn_prv->header_body_left > 0) {
        count = wby_read_buffered_data(&conn_prv->header_body_left, &conn_prv->header_buf, &ptr, &len);
        conn_prv->body_bytes_read += count;
    }

    /* Read buffered websocket data */
    if (conn_prv->io_data_left > 0) {
        count = wby_read_buffered_data(&conn_prv->io_data_left, &conn_prv->io_buf, &ptr, &len);
        conn_prv->body_bytes_read += count;
    }

    while (len > 0) {
        long err = recv((wby_socket_cast) WBY_SOCK(conn_prv->socket), ptr, (wby_size_cast) len, 0);
        if (err < 0) {
            conn_prv->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return (int)err;
        }
        len -= (wby_size)err;
        ptr += (wby_size)err;
        conn_prv->body_bytes_read += (int)err;
    }

    if ((conn_prv->flags & WBY_CON_FLAG_WEBSOCKET) && (conn_prv->ws_frame.flags & WBY_WSF_MASKED)) {
        /* XOR outgoing data with websocket ofuscation key */
        int i, end_pos = conn_prv->body_bytes_read;
        const wby_byte *mask = conn_prv->ws_frame.mask_key;
        ptr = (char*) ptr_; /* start over */
        for (i = start_pos; i < end_pos; ++i) {
            wby_byte byte = (wby_byte)*ptr;
            *ptr++ = (char)(byte ^ mask[i & 3]);
        }
    }
    return 0;
}

WBY_API int
wby_write(struct wby_con *conn, const void *ptr, wby_size len)
{
    struct wby_connection *conn_priv = (struct wby_connection*) conn;
    if (conn_priv->flags & WBY_CON_FLAG_WEBSOCKET) {
        wby_byte header[10];
        wby_size header_size;
        header_size = wby_make_websocket_header(header, conn_priv->ws_opcode, (int)len, 0);

        /* Overwrite opcode to be continuation packages from here on out */
        conn_priv->ws_opcode = WBY_WSOP_CONTINUATION;
        if (wby_socket_send(WBY_SOCK(conn_priv->socket), header, (int)header_size) != WBY_OK) {
            conn_priv->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return -1;
        }
        if (wby_socket_send(WBY_SOCK(conn_priv->socket),(const wby_byte*)ptr, (int)len) != WBY_OK) {
            conn_priv->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return -1;
        }
        return 0;
    } else if (conn_priv->flags & WBY_CON_FLAG_CHUNKED_RESPONSE) {
        const size_t chunk_header_size = 128;
        char chunk_header[chunk_header_size];


        int header_len = s_sprintf(chunk_header, chunk_header_size * sizeof(char), "%x\r\n", sizeof(int), (int) len);
        if (header_len < 1) {
            return -1;
        }


        wby_connection_push(conn_priv, chunk_header, header_len);
        wby_connection_push(conn_priv, ptr, (int)len);
        return wby_connection_push(conn_priv, "\r\n", 2);
    } else return wby_connection_push(conn_priv, ptr, (int) len);
}

WBY_INTERN int
wby_printf(struct wby_con* conn, const char* fmt, ...)
{
    int len;
    char buffer[1024];
    va_list args;
    va_start(args, fmt);
    len = vsnprintf(buffer, sizeof buffer, fmt, args);
    va_end(args);
    return wby_write(conn, buffer, (wby_size)len);
}

/* ---------------------------------------------------------------
 *                          RESPONSE
 * ---------------------------------------------------------------*/
#define WBY_STATUS_MAP(STATUS)\
    STATUS(100, "Continue")\
    STATUS(101, "Switching Protocols")\
    STATUS(200, "OK")\
    STATUS(201, "Created")\
    STATUS(202, "Accepted")\
    STATUS(203, "Non-Authoritative Information")\
    STATUS(204, "No Content")\
    STATUS(205, "Reset Content")\
    STATUS(206, "Partial Content")\
    STATUS(300, "Multiple Choices")\
    STATUS(301, "Moved Permanently")\
    STATUS(302, "Found")\
    STATUS(303, "See Other")\
    STATUS(304, "Not Modified")\
    STATUS(305, "Use Proxy")\
    STATUS(307, "Temporary Redirect")\
    STATUS(400, "Bad Request")\
    STATUS(401, "Unauthorized")\
    STATUS(402, "Payment Required")\
    STATUS(403, "Forbidden")\
    STATUS(404, "Not Found")\
    STATUS(405, "Method Not Allowed")\
    STATUS(406, "Not Acceptable")\
    STATUS(407, "Proxy Authentication Required")\
    STATUS(408, "Request Time-out")\
    STATUS(409, "Conflict")\
    STATUS(410, "Gone")\
    STATUS(411, "Length Required")\
    STATUS(412, "Precondition Failed")\
    STATUS(413, "Request Entity Too Large")\
    STATUS(414, "Request-URI Too Large")\
    STATUS(415, "Unsupported Media Type")\
    STATUS(416, "Requested range not satisfiable")\
    STATUS(417, "Expectation Failed")\
    STATUS(500, "Internal Server Error")\
    STATUS(501, "Not Implemented")\
    STATUS(502, "Bad Gateway")\
    STATUS(503, "Service Unavailable")\
    STATUS(504, "Gateway Time-out")\
    STATUS(505, "HTTP Version not supported")

WBY_GLOBAL const short wby_status_nums[] = {
#define WBY_STATUS(id, name) id,
    WBY_STATUS_MAP(WBY_STATUS)
#undef WBY_STATUS
};
WBY_GLOBAL const char* wby_status_text[] = {
#define WBY_STATUS(id, name) name,
    WBY_STATUS_MAP(WBY_STATUS)
#undef WBY_STATUS
};

WBY_INTERN const char*
wby_response_status_text(int status_code)
{
    int i;
    for (i = 0; i < (int) WBY_LEN(wby_status_nums); ++i) {
        if (wby_status_nums[i] == status_code)
            return wby_status_text[i];
    }
    return "Unknown";
}

WBY_API int
wby_response_begin(struct wby_con *conn_pub, int status_code, int content_length,
    const struct wby_header *headers, int header_count)
{
    int i = 0;
    struct wby_connection *conn = (struct wby_connection *)conn_pub;
    if (conn->body_bytes_read < (int)conn->public_data.request.content_length) {
        int body_left = conn->public_data.request.content_length - (int)conn->body_bytes_read;
        if (wby_con_discard_incoming_data(conn_pub, body_left) != WBY_OK) {
            conn->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
            return -1;
        }
    }

    wby_printf(conn_pub, "HTTP/1.1 %d %s\r\n", status_code, wby_response_status_text(status_code));
    if (content_length >= 0)
        wby_printf(conn_pub, "Content-Length: %d\r\n", content_length);
    else wby_printf(conn_pub, "Transfer-Encoding: chunked\r\n");
    wby_printf(conn_pub, "Server: wby\r\n");

    for (i = 0; i < header_count; ++i) {
        if (!strcasecmp(headers[i].name, "Connection")) {
            if (!strcasecmp(headers[i].value, "close"))
            conn->flags |= WBY_CON_FLAG_CLOSE_AFTER_RESPONSE;
        }
        wby_printf(conn_pub, "%s: %s\r\n", headers[i].name, headers[i].value);
    }

    if (!(conn->flags & WBY_CON_FLAG_CLOSE_AFTER_RESPONSE)) {
        /* See if the client wants us to close the connection. */
        const char* connection_header = wby_find_header(conn_pub, "Connection");
        if (connection_header && !strcasecmp("close", connection_header)) {
            conn->flags |= WBY_CON_FLAG_CLOSE_AFTER_RESPONSE;
            wby_printf(conn_pub, "Connection: close\r\n");
        }
    }
    wby_printf(conn_pub, "\r\n");
    if (content_length < 0)
        conn->flags |= WBY_CON_FLAG_CHUNKED_RESPONSE;
    return 0;
}

WBY_API void
wby_response_end(struct wby_con *conn)
{
    struct wby_connection *conn_priv = (struct wby_connection*) conn;
    if (conn_priv->flags & WBY_CON_FLAG_CHUNKED_RESPONSE) {
        /* Write final chunk */
        wby_connection_push(conn_priv, "0\r\n\r\n", 5);
        conn_priv->flags &= (unsigned short)~WBY_CON_FLAG_CHUNKED_RESPONSE;
    }
    /* Flush buffers */
    wby_connection_push(conn_priv, "", 0);

    /* Close connection when Content-Length is zero that maybe HTTP/1.0. */
    //if (conn->request.content_length == 0 && !wby_con_is_websocket_request(conn))
    wby_connection_close(conn_priv);
}

/* ---------------------------------------------------------------
 *                          SERVER
 * ---------------------------------------------------------------*/
/* Pointer to Integer type conversion for pointer alignment */
#if defined(__PTRDIFF_TYPE__) /* This case should work for GCC*/
# define WBY_UINT_TO_PTR(x) ((void*)(__PTRDIFF_TYPE__)(x))
# define WBY_PTR_TO_UINT(x) ((wby_size)(__PTRDIFF_TYPE__)(x))
#elif !defined(__GNUC__) /* works for compilers other than LLVM */
# define WBY_UINT_TO_PTR(x) ((void*)&((char*)0)[x])
# define WBY_PTR_TO_UINT(x) ((wby_size)(((char*)x)-(char*)0))
#elif defined(WBY_USE_FIXED_TYPES) /* used if we have <stdint.h> */
# define WBY_UINT_TO_PTR(x) ((void*)(uintptr_t)(x))
# define WBY_PTR_TO_UINT(x) ((uintptr_t)(x))
#else /* generates warning but works */
# define WBY_UINT_TO_PTR(x) ((void*)(x))
# define WBY_PTR_TO_UINT(x) ((wby_size)(x))
#endif

/* simple pointer math */
#define WBY_PTR_ADD(t, p, i) ((t*)((void*)((wby_byte*)(p) + (i))))
#define WBY_ALIGN_PTR(x, mask)\
    (WBY_UINT_TO_PTR((WBY_PTR_TO_UINT((wby_byte*)(x) + (mask-1)) & ~(mask-1))))

/* pointer alignment  */
#ifdef __cplusplus
template<typename T> struct wby_alignof;
template<typename T, int size_diff> struct wby_helper{enum {value = size_diff};};
template<typename T> struct wby_helper<T,0>{enum {value = wby_alignof<T>::value};};
template<typename T> struct wby_alignof{struct Big {T x; char c;}; enum {
    diff = sizeof(Big) - sizeof(T), value = wby_helper<Big, diff>::value};};
#define WBY_ALIGNOF(t) (wby_alignof<t>::value);
#else
#define WBY_ALIGNOF(t) ((char*)(&((struct {char c; t _h;}*)0)->_h) - (char*)0)
#endif

void
wby_init(struct wby_server *srv, const struct wby_config *cfg, wby_size *needed_memory)
{
    WBY_STORAGE const wby_size wby_conn_align = WBY_ALIGNOF(struct wby_connection);
    WBY_ASSERT(srv);
    WBY_ASSERT(cfg);
    WBY_ASSERT(needed_memory);

    memset(srv, 0, sizeof(*srv));
    srv->config = *cfg;
    WBY_ASSERT(cfg->dispatch);

    *needed_memory = 0;
    *needed_memory += cfg->connection_max * sizeof(struct wby_connection);
    *needed_memory += cfg->connection_max * cfg->request_buffer_size;
    *needed_memory += cfg->connection_max * cfg->io_buffer_size;
    *needed_memory += wby_conn_align;
    srv->memory_size = *needed_memory;
}

WBY_API void wby_event_loop(struct wby_server* server, struct server_state* state)
{
	while (!state->quit) {
		wby_update(server);
		sleep_for(30);
		++state->frame_counter;
	}
}

int
wby_start(struct wby_server *server, struct server_state *state, void *memory)
{
    wby_socket_cast handle = 0;
    wby_size i = 0;
    wby_socket sock = 0;
    wby_sockopt on = 1;
    wby_byte *buffer = (wby_byte*)memory;
    struct sockaddr_in bind_addr;
    WBY_STORAGE const wby_size wby_conn_align = WBY_ALIGNOF(struct wby_connection);

    WBY_ASSERT(server);
    WBY_ASSERT(memory);
    memset(buffer, 0, server->memory_size);

    /* setup sever memory */
    server->socket = WBY_INVALID_SOCKET;
    server->con = (struct wby_connection*)WBY_ALIGN_PTR(buffer, wby_conn_align);
    buffer += ((wby_byte*)server->con - buffer);
    buffer += server->config.connection_max * sizeof(struct wby_connection);

    for (i = 0; i < server->config.connection_max; ++i) {
        server->con[i].log = server->config.log;
        server->con[i].header_buf.data = buffer;
        buffer += server->config.request_buffer_size;
        server->con[i].io_buf.data = buffer;
        server->con[i].request_buffer_size = server->config.request_buffer_size;
        server->con[i].io_buffer_size = server->config.io_buffer_size;
        buffer += server->config.io_buffer_size;
    }
    WBY_ASSERT((wby_size)(buffer - (wby_byte*)memory) <= server->memory_size);

    /* server socket setup */
    handle = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);


    if(handle > 0)
    {
        sock = (wby_socket) handle;
    }

    printf("Handle value = %d \r\n", (int) sock);
    printf("Handle value = %d \r\n", WBY_INVALID_SOCKET);

#ifdef _WIN32
    printf("try start win231 \r\n");

    if (WSAGetLastError() == WSANOTINITIALISED) {
        /* Make sure WSAStartup has been called. */
        wby_dbg(server->config.log, "Calling WSAStartup.");
        WSADATA wsaData;
        WSAStartup(MAKEWORD(2, 2), &wsaData);
        handle = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
        if(handle > 0)
        {
            sock = (wby_socket) handle;
        }
        server->windows_socket_initialized = 1;
    }
#endif
    wby_dbg(server->config.log, "Server socket = %d", (int)sock);
    if (!wby_socket_is_valid(sock)) {
        wby_dbg(server->config.log, "failed to initialized server socket: %d", wby_socket_error());
        goto error;
    }

    setsockopt((wby_socket_cast) WBY_SOCK(sock), SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on));
    #ifdef __APPLE__ /* Don't generate SIGPIPE when writing to dead socket, we check all writes. */
    signal(SIGPIPE, SIG_IGN);
    #endif
    if (wby_socket_set_blocking(sock, 0) != WBY_OK) goto error;

    /* bind server socket */
    wby_dbg(server->config.log, "binding to %s:%d", server->config.address, server->config.port);
    memset(&bind_addr, 0, sizeof(bind_addr));
    bind_addr.sin_family = AF_INET;
    bind_addr.sin_port = htons((unsigned short)server->config.port);
    bind_addr.sin_addr.s_addr = inet_addr(server->config.address);

	bind( (wby_socket_cast) sock, (struct sockaddr*) &bind_addr, sizeof(struct sockaddr_in));

	/*
	Todo: not working on open enclave SDK? for bind error check
	very weird
    if ( bind_ret == -1)
	{
        wby_dbg(server->config.log, "bind() failed: %d", wby_socket_error());
        wby_dbg(server->config.log, "bind() failed: %s", strerror(wby_socket_error()));
        goto error;
    }
	*/

    /* set server socket to listening */
    if (listen((wby_socket_cast) sock, SOMAXCONN) != WBY_OK) {
        wby_dbg(server->config.log, "listen() failed: %d", wby_socket_error());
        wby_socket_close(WBY_SOCK(sock));
        goto error;
    }
    server->socket = sock;
    wby_dbg(server->config.log, "server initialized: %s", strerror(errno));

	/* Start the event loop for the server */
	wby_event_loop(server, state);
    return 0;

error:
    if (wby_socket_is_valid(WBY_SOCK(sock)))
        wby_socket_close(WBY_SOCK(sock));
    return -1;
}

void
wby_stop(struct wby_server *srv)
{
#ifdef _WIN32
    if (srv->windows_socket_initialized) {
        WSACleanup();
    }
#endif
    wby_size i;
    wby_socket_close(WBY_SOCK(srv->socket));
    for (i = 0; i < srv->con_count; ++i)
        wby_socket_close(WBY_SOCK(srv->con[i].socket));
}

WBY_INTERN int
wby_on_incoming(struct wby_server *srv)
{
    wby_socket_cast handle = 0;
    wby_size connection_index;
    char WBY_ALIGN(8) client_addr[64];
    struct wby_connection* connection;
    wby_socklen client_addr_len = sizeof(client_addr);
    wby_socket fd = 0;

    /* Make sure we have space for a new connection */
    connection_index = srv->con_count;
    if (connection_index == srv->config.connection_max) {
        wby_dbg(srv->config.log, "out of connection slots");
        return 1;
    }

    /* Accept the incoming connection. */
    handle = accept((wby_socket_cast) WBY_SOCK(srv->socket), (struct sockaddr*)&client_addr[0], &client_addr_len);
    if(handle <= 0)
    {
        int err = wby_socket_error();
        if (!wby_socket_is_blocking_error(err))
            wby_dbg(srv->config.log, "accept() failed: %d", err);
        return 1;
    }
    else
    {
        fd = (wby_socket) handle;
    }

    connection = &srv->con[connection_index];
    wby_connection_reset(connection, srv->config.request_buffer_size, srv->config.io_buffer_size);
    connection->flags = WBY_CON_FLAG_FRESH_CONNECTION;
    srv->con_count = connection_index + 1;

    /* Configure socket */
    if (wby_socket_config_incoming(fd) != WBY_OK) {
        wby_socket_close(fd);
        return 1;
    }

    /* OK, keep this connection */
    wby_dbg(srv->config.log, "tagging connection %d as alive", connection_index);
    connection->flags |= WBY_CON_FLAG_ALIVE;
    connection->socket = fd;
    return 0;
}

WBY_INTERN void
wby_update_connection(struct wby_server *srv, struct wby_connection* connection)
{
    /* This is no longer a fresh connection. Only read from it when select() says
    * so in the future. */
    connection->flags &= (unsigned short)~WBY_CON_FLAG_FRESH_CONNECTION;
    for (;;)
    {
        switch (connection->state) {
        default: break;
        case WBY_CON_STATE_REQUEST: {
            const char *expect_header;
            int request_size;
            int result = wby_socket_recv(WBY_SOCK(connection->socket),
                &connection->header_buf, srv->config.log);
            if (WBY_FILL_ERROR == result) {
                connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                return;
            }

            /* Scan to see if the buffer has a complete HTTP request header package. */
            request_size = wb_peek_request_size(connection->header_buf.data,
                (int)connection->header_buf.used);
            if (request_size < 0) {
                /* Nothing yet. */
                if (connection->header_buf.max == connection->header_buf.used) {
                    wby_dbg(srv->config.log, "giving up as buffer is full");
                    /* Give up, we can't fit the request in our buffer. */
                    connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                }
                return;
            }
            wby_dbg(srv->config.log, "peek request size: %d", request_size);


            /* Set up request data. */
            if (wby_connection_setup_request(connection, request_size) != WBY_OK) {
                wby_dbg(srv->config.log, "failed to set up request");
                connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                return;
            }

            /* Remember how much of the remaining buffer is body data. */
            connection->header_body_left = (int)connection->header_buf.used - request_size;
            /* If the client expects a 100 Continue, send one now. */
            if (NULL != (expect_header = wby_find_header(&connection->public_data, "Expect"))) {
                if (!strcasecmp(expect_header, "100-continue")) {
                    wby_dbg(srv->config.log, "connection expects a 100 Continue header.. making him happy");
                    connection->continue_data_left = (int)wby_continue_header_len;
                    connection->state = WBY_CON_STATE_SEND_CONTINUE;
                } else {
                    wby_dbg(srv->config.log, "unrecognized Expected header %s", expect_header);
                    connection->state = WBY_CON_STATE_SERVE;
                }
            } else connection->state = WBY_CON_STATE_SERVE;
        } break; /* WBY_REQUEST */

        case WBY_CON_STATE_SEND_CONTINUE: {
            int left = connection->continue_data_left;
            int offset = (int)wby_continue_header_len - left;
            long written = 0;

            written = send((wby_socket_cast) WBY_SOCK(connection->socket), wby_continue_header + offset, (wby_size_cast) left, 0);
            wby_dbg(srv->config.log, "continue write: %d bytes", written);
            if (written < 0) {
                wby_dbg(srv->config.log, "failed to write 100-continue header");
                connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                return;
            }
            left -= (int)written;
            connection->continue_data_left = left;
            if (left == 0)
                connection->state = WBY_CON_STATE_SERVE;
        } break; /* WBY_SEND_cONTINUE */

        case WBY_CON_STATE_SERVE: {
            /* Clear I/O buffer for output */
            connection->io_buf.used = 0;
            /* Switch socket to blocking mode. */
            if (wby_connection_set_blocking(connection) != WBY_OK)
                return;

            /* Figure out if this is a request to upgrade to WebSockets */
            if (wby_con_is_websocket_request(&connection->public_data)) {
                wby_dbg(srv->config.log, "received a websocket upgrade request");
                if (!srv->config.ws_connect ||
                    srv->config.ws_connect(&connection->public_data, srv->config.userdata) != WBY_OK)
                {
                    wby_dbg(srv->config.log, "user callback failed connection attempt");
                    wby_response_begin(&connection->public_data, 400, -1,
                        wby_plain_text_headers, WBY_LEN(wby_plain_text_headers));
                    wby_printf(&connection->public_data, "WebSockets not supported at %s\r\n",
                        connection->public_data.request.uri);
                    wby_response_end(&connection->public_data);
                } else {
                    /* OK, let's try to upgrade the connection to WebSockets */
                    if (wby_connection_send_websocket_upgrade(connection) != WBY_OK) {
                        wby_dbg(srv->config.log, "websocket upgrade failed");
                        wby_response_begin(&connection->public_data, 400, -1,
                            wby_plain_text_headers, WBY_LEN(wby_plain_text_headers));
                        wby_printf(&connection->public_data, "WebSockets couldn't not be enabled\r\n");
                        wby_response_end(&connection->public_data);
                    } else {
                        /* OK, we're now a websocket */
                        connection->flags |= WBY_CON_FLAG_WEBSOCKET;
                        wby_dbg(srv->config.log, "connection %d upgraded to websocket",
                            (int)(connection - srv->con));
                        srv->config.ws_connected(&connection->public_data, srv->config.userdata);
                    }
                }
            } else if (srv->config.dispatch(&connection->public_data, srv->config.userdata, srv) != 0) {
                static const struct wby_header headers[] = {{ "Content-Type", "text/plain" }};
                wby_response_begin(&connection->public_data, 404, -1, headers, WBY_LEN(headers));
                wby_printf(&connection->public_data, "No handler for %s\r\n",
                    connection->public_data.request.uri);
                wby_response_end(&connection->public_data);
            }

            /* Back to non-blocking mode, can make the socket die. */
            wby_connection_set_nonblocking(connection);
            /* Ready for another request, unless we should close the connection. */
            if (connection->flags & WBY_CON_FLAG_ALIVE) {
                if (connection->flags & WBY_CON_FLAG_CLOSE_AFTER_RESPONSE) {
                    connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                    return;
                } else {
                    /* Reset connection for next request. */
                    wby_connection_reset(connection, srv->config.request_buffer_size,
                        srv->config.io_buffer_size);
                    if (!(connection->flags & WBY_CON_FLAG_WEBSOCKET)) {
                        /* Loop back to request state */
                        connection->state = WBY_CON_STATE_REQUEST;
                    } else {
                        /* Clear I/O buffer for input */
                        connection->io_buf.used = 0;
                        /* Go to the web socket serving state */
                        connection->state = WBY_CON_STATE_WEBSOCKET;
                    }
                }
            }
        } break; /* WBY_SERVE */

        case WBY_CON_STATE_WEBSOCKET: {
            /* In this state, we're trying to read a websocket frame into the I/O
            * buffer. Once we have enough data, we call the websocket frame
            * callback and let the client read the data through WebbyRead. */
            if (WBY_FILL_ERROR == wby_socket_recv(WBY_SOCK(connection->socket),
                &connection->io_buf, srv->config.log)) {
                /* Give up on this connection */
                connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                return;
            }

            if (wby_scan_websocket_frame(&connection->ws_frame, &connection->io_buf) != WBY_OK)
                return;

            connection->body_bytes_read = 0;
            connection->io_data_left = (int)connection->io_buf.used - connection->ws_frame.header_size;
            wby_dbg(srv->config.log, "%d bytes of incoming websocket data buffered",
                (int)connection->io_data_left);

            /* Switch socket to blocking mode */
            if (wby_connection_set_blocking(connection) != WBY_OK)
                return;

            switch (connection->ws_frame.opcode)
            {
            case WBY_WSOP_CLOSE:
                wby_dbg(srv->config.log, "received websocket close request");
                connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                return;

              case WBY_WSOP_PING:
                wby_dbg(srv->config.log, "received websocket ping request");
                if (wby_socket_send(WBY_SOCK(connection->socket), wby_websocket_pong,
                    sizeof wby_websocket_pong)){
                    connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                    return;
                }
                break;

              default:
                /* Dispatch frame to user handler. */
                if (srv->config.ws_frame(&connection->public_data,
                    &connection->ws_frame, srv->config.userdata) != WBY_OK) {
                  connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                  return;
                }
            }

            /* Discard any data the client didn't read to retain the socket state. */
            if (connection->body_bytes_read < connection->ws_frame.payload_length) {
                int size = connection->ws_frame.payload_length - connection->body_bytes_read;
                if (wby_con_discard_incoming_data(&connection->public_data, size) != WBY_OK) {
                    connection->flags &= (unsigned short)~WBY_CON_FLAG_ALIVE;
                    return;
                }
            }

            /* Back to non-blocking mode */
            if (wby_connection_set_nonblocking(connection) != WBY_OK)
                return;

            wby_connection_reset(connection, srv->config.request_buffer_size, srv->config.io_buffer_size);
            connection->state = WBY_CON_STATE_WEBSOCKET;
        } break; /* WBY_WEBSOCKET */
        } /* switch */
    } /* for */
}

WBY_API void
wby_update(struct wby_server *srv)
{
    int err;
    wby_size i, count;
    wby_socket max_socket;
    fd_set read_fds, write_fds, except_fds;
    struct timeval timeout;

    /* Build set of sockets to check for events */
    FD_ZERO(&read_fds);
    FD_ZERO(&write_fds);
    FD_ZERO(&except_fds);
    max_socket = 0;

    /* Only accept incoming connections if we have space */
    if (srv->con_count < srv->config.connection_max) {
        FD_SET(srv->socket, &read_fds);
        FD_SET(srv->socket, &except_fds);
        max_socket = WBY_SOCK(srv->socket);
    }

    for (i = 0, count = srv->con_count; i < count; ++i) {
        wby_socket socket = WBY_SOCK(srv->con[i].socket);
        FD_SET(socket, &read_fds);
        FD_SET(socket, &except_fds);
        if (srv->con[i].state == WBY_CON_STATE_SEND_CONTINUE)
            FD_SET(socket, &write_fds);
        if (socket > max_socket)
            max_socket = socket;
    }

    timeout.tv_sec = 0;
    timeout.tv_usec = 5;
    err = select((int)(max_socket + 1), &read_fds, &write_fds, &except_fds, &timeout);
    if (err < 0) {
        wby_dbg(srv->config.log, "failed to select");
        return;
    }

    /* Handle incoming connections */
    if (FD_ISSET(WBY_SOCK(srv->socket), &read_fds)) {
        do {
            wby_dbg(srv->config.log, "awake on incoming");
            err = wby_on_incoming(srv);
        } while (err == 0);
    }

    /* Handle incoming connection data */
    for (i = 0, count = srv->con_count; i < count; ++i) {
        struct wby_connection *conn = &srv->con[i];
        if (FD_ISSET(WBY_SOCK(conn->socket), &read_fds) ||
            FD_ISSET(WBY_SOCK(conn->socket), &write_fds) ||
            conn->flags & WBY_CON_FLAG_FRESH_CONNECTION)
        {
            wby_dbg(srv->config.log, "reading from connection %d", i);
            wby_update_connection(srv, conn);
        }
    }

    /* Close stale connections & compact connection array. */
    for (i = 0; i < srv->con_count; ) {
        struct wby_connection *connection = &srv->con[i];
        if (!(connection->flags & WBY_CON_FLAG_ALIVE)) {
            wby_size remain;
            wby_dbg(srv->config.log, "closing connection %d (%08x)", i, connection->flags);
            if (connection->flags & WBY_CON_FLAG_WEBSOCKET)
                srv->config.ws_closed(&connection->public_data, srv->config.userdata);
            remain = srv->con_count - (wby_size)i - 1;
            wby_connection_close(connection);
            memmove(&srv->con[i], &srv->con[i + 1], remain*sizeof(srv->con[i]));
            --srv->con_count;
        } else ++i;
    }
}

void wby_config(const char *address, unsigned int port, struct server_state* state, struct wby_config* config,
	int(*dispatch)(struct wby_con* con, void* userdata, void* server))
{
	memset(state, 0, sizeof(struct server_state));
	memset(config, 0, sizeof(struct wby_config));
	config->userdata = &state;
	config->address = address;
	config->port = port;
	config->connection_max = 4;
	config->request_buffer_size = WBY_REQ_BUF_SIZE;
	config->io_buffer_size = 8192;
	config->log = test_log;
	config->dispatch = dispatch;
}

char *get_post_buf(struct wby_con *connection, struct wby_server *svr)
{
	struct wby_connection *detailed_con = (struct wby_connection*) connection;
    int pay_load_len = connection->request.content_length;
    void *post_content = NULL;

	wby_dbg(svr->config.log, "positive pay load len");
	if (pay_load_len <= WBY_REQ_BUF_SIZE - 100)
	{
		// Allocate mem.
		wby_dbg(svr->config.log, "Processing POST payload!");
		post_content = malloc((wby_size) pay_load_len + 1);
		if (!post_content)
		{
			wby_dbg(svr->config.log, "Out of mem for allocation post content.");
			wby_response_end(connection);
			return NULL;
		}
		memset(post_content, 0, (wby_size) pay_load_len + 1);

		// Read payload.
		if (wby_read(connection, post_content, (wby_size) pay_load_len) != WBY_OK)
		{
			wby_dbg(svr->config.log, "problem reading POST payload");
			wby_response_end(connection);
			return NULL;
		}

		// Didnt fully read payload or invalid payload len set by client.
		if (detailed_con->body_bytes_read != (wby_size) pay_load_len)
		{
			wby_dbg(svr->config.log, "problem fully reading POST payload");
			wby_response_end(connection);
			return NULL;
		}

		// Process JSON.
		((unsigned char*) post_content)[detailed_con->body_bytes_read] = '\0';
		return (char *) post_content;
	}

	return NULL;
}

StrMap *post_json_eq_to_json(char *post_content)
{
	char *json_str = strstr((char* const) post_content, "json=");
	if (json_str)
	{
		json_str = json_str + 5;
		return json_decode(json_str, strlen(json_str));
	}

	return NULL;
}

unsigned int serve_static_file(const char *www_root_path, struct wby_con *connection)
{
	size_t url_len = strlen(connection->request.uri);
	size_t file_path_len = 0;
	const size_t file_path_size = 512;
	char file_path[file_path_size] = { 0 };

	// Inputs + format str overflows buf.
	if ((file_path_len = s_sprintf(file_path, file_path_size, "%s/%s", url_len + strlen(www_root_path), www_root_path, connection->request.uri)) < 1)
	{
		wby_response_begin(connection, 500, 3, NULL, 0);
		wby_write(connection, "500", 3);
		wby_response_end(connection);

		return 0;
	}

	// Validate path before openning it to stop LFI.
	if (is_lfi(file_path, file_path_size))
	{
		wby_response_begin(connection, 500, 3, NULL, 0);
		wby_write(connection, "500", 3);
		wby_response_end(connection);

		return 0;
	}
		
	// Load file if it exists.
	if (access(file_path, F_OK) != -1)
	{
		char* file_content = file_get_contents(&file_path[0]);
		if (file_content)
		{
			size_t file_content_len = strlen(file_content);
			wby_response_begin(connection, 200, file_content_len, NULL, 0);
			wby_write(connection, file_content, file_content_len);
			wby_response_end(connection);
			free(file_content);

			return 1;
		}
	}
	else
	{
		wby_response_begin(connection, 404, 3, NULL, 0);
		wby_write(connection, "404", 3);
		wby_response_end(connection);

		return 0;
	}


	return 0;
}


