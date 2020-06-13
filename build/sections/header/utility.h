#ifndef _MSC_VER
size_t strnlen_s(const char *s, size_t maxsize);
#endif

#ifndef _MSC_VER
size_t strncpy_s(const char *dest, size_t dest_size, const char *src, size_t src_count);
#endif

int strncmp_s(const char* dest, size_t dest_size, const char* src, size_t src_size, size_t count);

int s_sprintf(char * const dest, size_t dest_size, const char *format, size_t varg_total_size, ...);

size_t hexstr_to_bytes(const char* hexstr, size_t len, unsigned char* out, size_t out_size);

size_t bytes_to_hex(unsigned char* b_str, size_t b_str_len, unsigned char* out, size_t out_len);

void hex_print(uint8_t *buf, size_t size);

bool A(unsigned char *c_str, unsigned int do_throw=0);

void reverse(char s[]);

void itoa(uint128_t n, char s[]);

int print_uint128_t(uint128_t u128, uint128_t precision=0);

void assert_uint128_t(uint128_t left, uint128_t right);

unsigned char * Z(unsigned char *c_str, size_t from_size_of);

void PN(t_number no);

void delete_t_number(void *p);

void terminate_uid(void *uid, size_t buf_len);

bool is_whitespace(char ch);

void trim_ws(char* s);


#ifdef _MSC_VER
#define vscprintf _vscprintf
#endif

#ifdef __GNUC__
int vscprintf(const char *format, va_list ap);
#endif

#ifdef _MSC_VER
int vasprintf(char **strp, const char *format, va_list ap);
int asprintf(char **strp, const char *format, ...);
#endif

void sleep_for(long ms);

void test_log(const char* text);

char *file_get_contents(const char *file_path);

bool is_lfi(char *buf, size_t size);

unsigned int s_gets( char *str, size_t n );

bool re_match(const char *p_cstr_pattern, char *p_cstr_haystack);

bool is_hex(char *p_cstr);

char *url_get_contents(const char *url);
