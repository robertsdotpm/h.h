#define H_H
#include "../h.h"
// Copy https://raw.githubusercontent.com/robertsdotpm/h.h/master/h.h and include it

/*
#include "sections/header/includes.h"
#include "sections/code/includes.cpp"


#include "sections/header/config.h"
#include "sections/code/config.cpp"

#include "sections/header/endian.h"


#include "sections/header/uint128.h"
#include "sections/code/uint128.cpp"


#include "sections/header/regex.h"
#include "sections/code/regex.cpp"



#include "sections/header/utility.h"
#include "sections/code/utility.cpp"



#include "sections/header/linked_list.h"
#include "sections/code/linked_list.cpp"



#include "sections/header/math.h"
#include "sections/code/math.cpp"



#include "sections/header/hashmap.h"
#include "sections/code/hashmap.cpp"


#include "sections/header/json.h"
#include "sections/code/json.cpp"


#include "sections/header/crypto/hash/sha256.h"
#include "sections/code/crypto/hash/sha256.cpp"

#include "sections/header/crypto/rand.h"
#include "sections/code/crypto/rand.cpp"



#include "sections/header/crypto/ecdsa/bignum.h"
#include "sections/code/crypto/ecdsa/bignum.cpp"

#include "sections/header/crypto/hash/sha2.h"
#include "sections/code/crypto/hash/sha2.cpp"

#include "sections/header/crypto/hash/hmac.h"
#include "sections/code/crypto/hash/hmac.cpp"

#include "sections/header/crypto/ecdsa/secp256k1.h"
#include "sections/code/crypto/ecdsa/secp256k1.cpp"



#include "sections/header/api/utility.h"
#include "sections/code/api/utility.cpp"



#include "sections/header/web.h"
#include "sections/code/web.cpp"



#include "sections/header/http.h"
#include "sections/code/http.cpp"

*/


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



int main(int argc, char **argv)
{

    
        // BigNum ---------------------------------------------
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

        // Hashmap / dictionary / associative array --------------------------

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

        // Linked lists ------------------------------------------------------

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
        

        // JSON ------------------------------------------------------------

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
        //	struct StrMap* p_json_map, const char *key,
        //	char *p_cstr_exact_list_filter=0,
        //	struct t_number gte_filter=N(0),
        //	struct t_number lte_filter=N(0),
        //	unsigned int op=LOGIC_AND,
        //	bool do_throw=true
        //);
        

        printf("Json validated.\r\n");

        
        // Match a string --------------------------------------------------------
        char heystack[] = {"DeAdBeEF1122"};
        if(re_match("^[a-fA-F0-9]+$", heystack))
        {
            printf("That's a match.\r\n");
        }

        // Crypto ----------------------------------------------------------------
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

        // Download a file over HTTP --------------------------------------------
        // Might make sense to code a wrapper for this boiler plate.

        // Make sure to specify port or it won't work.
        char *url_content = url_get_contents("http://www.google.com:80/index.html", 4);
        free(url_content);

        // HTTP POST
        //
        //    http_t* http_post( char const* url, void const* data, size_t size, void* memctx )
        //
        //Initiates a http POST request with the specified url. `url` is a zero terminated string containing the request location,
        //just like you would type it in a browser, for example `http://www.mattiasgustavsson.com:80/http_test.txt`. `data` is a
        //pointer to the data to be sent along as part of the request, and `size` is the number of bytes to send. `memctx` is a 
        //pointer to user defined data which will be passed through to the custom HTTP_MALLOC/HTTP_FREE calls. It can be NULL if 
        //no user defined data is needed. Returns a `http_t` instance, which needs to be passed to `http_process` to process the
        //request. When the request is finished (or have failed), the returned `http_t` instance needs to be released by calling
        //`http_release`. If the request was invalid, `http_post` returns NULL.
        

        // Simple single-threaded, polling web server ----------------------------
        http_server_start();


        // Useful utility functions ----------------------------------------------

        
        

        printf("Success.\r\n");
        return 0;

    return 0;

}


