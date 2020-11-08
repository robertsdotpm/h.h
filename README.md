# #include "h.h"

Welcome to h.h: a single-header C/C++11 library for bootstrapping new projects. Now with C support!

I built h.h because the development experience in C and C++ can be really painful. For this reason h.h has no external dependencies and only uses standard C features. I have found that using C++ STL means having vastly more portability problems. You'll find that web assembly often won't even compile C++. In contrast: this library works with **32 bit web assembly**; Runs on **all major 64 bit operating systems**; And builds with most compilers without warnings. It even works with **Intel enclaves** (obviously not the socket code - but the algorithm stuff.)

There are many more planned features to be added to this project. But for now the modules bellow are what this header file supports.

## Modules

* [Using the library](#a1)
* [BigNum math](#a2)
* [Associative arrays](#a3)
* [Dynamic lists](#a4)
* [JSON support](#a5)
* [Download a file from a URL](#a6)
* [HTTP POST](#a7)
* [Match a string](#a8)
* [Basic crypto](#a9)
* [Simple HTTP server](#a10)
* [Useful utility functions](#a11)

## Using the library <a name="a1"></a>

``` c
#define H_H
#include "h.h"

int main(int argc, char **argv)
{
    printf("Success!\r\n");
    return 0;
}
```

## BigNum math <a name="a2"></a>

BigNumber math is supported through a native 128 bit unsigned int type with fallback to two 64 bit unsigned ints on platforms that lack support.

It supports mixed precision math with a max size depending on the size of the whole number portion. For instance: a 64 bit whole number means 64 bits for the decimal portion.

Since the max number that fits inside 64 bits is (2 ** 64) - 1 = 18446744073709551615 this is 20 digits long -- the max precision to use would be 19 because you want to be able to fit every possible column value.

``` c
struct t_number a = Ns("10.1337", 0);
struct t_number b = Ns("342243.34134134234", 0);
struct t_number result = safe_math(&safe_mul, a, b, 4); // Precision = 4.
PN(result);

// Throws an error if precision overflows.
PN( safe_math(&safe_add, a, b, 0) );

// Divide and use highest precision possible.
struct t_number x = safe_math(&safe_div, Nu(2, 0), Ns("0.23", 0), 0);

// Round down.
PN( safe_round( Ns("10.1234", 0), 3 ) );

// Round up.
PN( safe_round( Ns("10.1235", 0), 3 ) );

// Subtract -- mixed precision -- and padded right.
struct t_number c = Ns("12.3", 3);
struct t_number d = Ns("5.02", 5);
PN( safe_math(&safe_sub, c, d, 6) );

// Logic expressions
if( safe_logic(GREATER_THAN, c, d, 6) )
{
    printf("c is > d\r\n");
}

// All the logic ops:
// GREATER_THAN
// GREATER_EQUALS
// LESS_THAN
// LESS_EQUALS
// BOTH_EQUALS
// NOT_EQUALS
// LOGIC_AND
// LOGIC_OR
```

## Associative arrays / hashmaps / dictionaries <a name="a3"></a>

AKA looking up 'variables' by a named key. The hashmap implementation here supports any type of variable at the expense of having to typecast it back upon retrieval.

``` c
// Create hashmap.
unsigned int assoc_size = 1024 * 64;
struct StrMap *p_map = map_create(assoc_size);

// Put arbitrary objects in hashmap.
struct t_number some_obj = Nu(10, 0);
unsigned char typical_c_str[] = "test";
map_put(p_map, "obj1", &some_obj);
map_put(p_map, "obj2", &typical_c_str);

// Get back arbitrary objects.
// You need to know their original types to use them.
PN( *(struct t_number *) map_get(p_map, "obj1") );
printf( "%s\r\n", (unsigned char *) map_get(p_map, "obj2") );

// Destroy hashmap.
map_destroy(p_map);
p_map = NULL;
```

## Dynamic lists <a name="a4"></a>

Based on the simple linked list data structure.

``` c
// Create linked list
struct t_linked_info *p_list = create_linked_list_info();

// Add items to linked list.
struct t_number a_no = Ns("2", 0);
struct t_number b_no = Ns("0", 0);
add_value_to_linked_list(p_list, &a_no);
add_value_to_linked_list(p_list, &b_no);



// Loop over list and display items.
struct t_linked_item *p_item = NULL; 
while((p_item = TREAD(p_list, p_item)) != NULL)
{
    struct t_number *p_no = (struct t_number *) p_item->value;
    PN( *p_no );
}

// Delete a specific item from the list.
remove_value_from_linked_list(p_list, &a_no);
printf("List len: %d\r\n", p_list->no); // Number of items in list = 1.

// Pop the last item.
p_item = linked_list_pop(p_list);
printf("List len: %d\r\n", p_list->no); // 0.

// Destroy list.
delete_linked_list(p_list, 0);


//Join two lists: 
//
//    void join_linked_lists(
//        struct t_linked_info *list_a,
//        struct t_linked_info *list_b
//    )
//
//This will add list_b to list_a in place.
```

## JSON support <a name="a5"></a>

The good thing about this JSON module is it allows for simple key-value lookup. Most libraries in C and C++ force you to write a pseudo-parser just to access the JSON data. Why can't we have simple software in C?

``` c
// Index JSON.
char json_str[] = 
"{"
"    \"call\": \"api_call\","
"    \"auth\": {"
"        \"pub\": \"03A5D5B431FD8F95E1B156DEC8F6E5D657C03C6D755F0DBEFDF844781F04FB14\","
"        \"demo\": \"2\","
"        \"admin\": 4"
"    }"
"}";
struct StrMap* p_json = json_decode(json_str, strlen(json_str));

// Get an item from JSON by key.
char *pub = get_json_str(p_json, "[auth][pub]", 0, 0);
struct t_number *is_admin = get_json_no(p_json, "[auth][admin]", 0);
printf("%s\r\n", pub);
PN(*is_admin);

// ... with basic schema validation.
bool do_throw = true;
bool str_is_hex = true; // Needs to start with pound sign.
bool return_bytes = false;

pub = get_json_str(p_json, "[auth][pub]", 64, do_throw);
is_admin = get_json_no(p_json, "[auth][admin]", do_throw);
char *hex_pub = jstr_schema(p_json, "[auth][pub]", "^[a-fA-F0-9]+$", 64, str_is_hex, return_bytes, do_throw);
char exact_no_list[] = "1,2,";
struct t_number *exact_no = jno_schema(p_json, "[auth][admin]", &exact_no_list[0], Ns("0", 0), Ns("0", 0), LOGIC_AND, 0 );




//struct t_number *jno_schema(
//  struct StrMap* p_json_map, const char *key,
//  char *p_cstr_exact_list_filter=0,
//  struct t_number gte_filter=N(0),
//  struct t_number lte_filter=N(0),
//  unsigned int op=LOGIC_AND,
//  bool do_throw=true
//);


printf("Json validated.\r\n");

```

## Download a file from a URL <a name="a6"></a>

The URL parsing here isn't great so make sure to specify the port or it won't work.

``` cpp
// Second param is timeout
char *url_content = url_get_contents("http://www.google.com:80/index.html", 4.0); 
free(url_content);
```

## HTTP POST <a name="a7"></a>

http_t* http_post( char const* url, void const* data, size_t size, void* memctx );

Ignore memctx by passing in a NULL and then pass in a URL encoded string for the data argument. Strlen data for the size argument.

## Match a string <a name="a8"></a>

``` c
char heystack[] = {"DeAdBeEF1122"};
if(re_match("^[a-fA-F0-9]+$", heystack))
{
    printf("That's a match.\r\n");
}
```

## Basic crypto <a name="a9"></a>

Shows how to make a fingerprint for a message using sha256 hashing and signs the fingerprint using ECDSA with the secp256k1 curve.

``` c
int status = 0;
char msg[] = {"test"};
uint8_t digest[32 + 1] = {};
uint8_t sig[64 + 1] = {};
uint8_t priv_key[32 + 1] = {};
uint8_t pub_key[33 + 1] = {};

sha256(digest, (unsigned char *) &msg[0], strlen(&msg[0]));
rand_bytes(priv_key, 32);
ecdsa_get_public_key33(&secp256k1, priv_key, pub_key);
ecdsa_sign_digest(&secp256k1, priv_key, digest, sig, NULL, 0);
status = ecdsa_verify_digest(&secp256k1, pub_key, sig, digest);
if(status == 0)
{
    hex_print(priv_key, strlen((char *) priv_key));
    hex_print(pub_key, 33);
    printf("Signature validated with zero errors!\r\n");
}
```

## Simple HTTP server <a name="a10"></a>

Single-threaded, polling-based web server. Demonstrates how to support URL variables, POST content, JSON processing, and serving static files. The dispatch function is where you would add custom code to implement a REST API.

``` c

int dispatch(struct wby_con *connection, void *userdata, void *server)
{
    // Main structs.
    struct server_state *state = (struct server_state*) userdata;
    struct wby_server *svr = (struct wby_server*) server;
    struct wby_connection *detailed_con = (struct wby_connection*) connection;

    // Read POST data into buf and process sample JSON-data.
    if (connection->request.content_length)
    {
        // Sanitize post buffer and get a reference.
        char *post_content = get_post_buf(connection, svr);
        if(!post_content) return 0;

        // POST a field called json with the content as valid json.
        struct StrMap *p_json = post_json_eq_to_json(post_content);
        if(!p_json) return 0;

        // Then you write your code to manipulate it here...
        // The JSON is already an assoc array. See examples.
        return 0;
    }
    else // Support static files.
    {
        serve_static_file("/var/www_root", connection);
        return 0;
    }

    
    //If you want to support API requests you could check for /api/
    //in the URL and run your code there otherwise call server_static_file.
    //E.g.
    //if (strncmp_s("/api", 4, connection->request.uri, url_len, 4) != 0)
    //{
    //    ... serve static file
    //}
    //else
    //{
    //    ... handle api calls
    //}
    
    
}

// Start the web server.
void http_server_start()
{
    // Data structs for server.
    void* memory = NULL;
    wby_size needed_memory = 0;
    struct server_state state;
    struct wby_server server;
    struct wby_config config;

    // Start web server.
    wby_config("127.0.0.1", 12344, &state, &config, dispatch);
    wby_init(&server, &config, &needed_memory);
    memory = calloc(needed_memory, 1);
    wby_start(&server, &state, memory);
}

```

## Useful utility functions <a name="a11"></a>

Here's a snippet of some useful function prototypes from the utility module. There's implementations of some safe string handling functions here too.

``` c

size_t hexstr_to_bytes(const char* hexstr, size_t len, unsigned char *out, size_t out_size);
size_t bytes_to_hex(unsigned char *b_str, size_t b_str_len, unsigned char *out, size_t out_len);
void hex_print(uint8_t *buf, size_t size);
char *file_get_contents(const char *file_path);
void PN(t_number no); // Print big number.
size_t strnlen_s(const char *s, size_t maxsize);
size_t strncpy_s(char *dest, size_t dest_size, const char *src, size_t src_count);
int strncmp_s(const char *dest, size_t dest_size, const char *src, size_t src_size, size_t count);
int s_sprintf(char * const dest, size_t dest_size, const char *format, size_t varg_total_size, ...);
```
