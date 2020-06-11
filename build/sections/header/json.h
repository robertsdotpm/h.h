enum t_json_expect {
	JSON_any = 0,
	JSON_non_start = 1,
	JSON_any_quotes = 2,
	JSON_any_then_close_name = 3,
	JSON_any_or_quotes = 4,
	JSON_colon_then_open_or_expr = 5,
	JSON_open_or_expr = 6,
	JSON_expr = 7,
	JSON_str_any_or_close = 8,
	JSON_any_or_end_expr = 9,
	JSON_close_or_comma_expr = 10,
	JSON_obj = 1000,
	JSON_list = 2000,
	JSON_left_tree = 3000
};

enum t_json_expr_type {
    JSON_no = 1,
    JSON_str = 2
};

struct t_json_expr
{
    unsigned int type;
    struct t_number *p_no;
    unsigned char *p_str;
    unsigned char *p_no_str;
};

struct t_json_tokens
{
	// Number of key value pairs in tree.
	unsigned int key_pair_no;

	// Used for state machine transitions.
	unsigned int expect;

	// If it's a JSON tree name is the key.
	unsigned char *name;

	// Indicate a found value ready to save.
    struct t_json_expr expr;

	// Type of tree: obj or list.
    unsigned int tree_type;
};

unsigned char *get_json_key_name(struct t_linked_info* linked_list);

void json_save_key_pair(struct t_json_tokens* p_json_tokens, StrMap *p_json, struct t_linked_info* linked_list);

struct t_json_tokens *pop_json_token_sub_tree(struct t_linked_info *linked_list, struct t_json_tokens *p_json_tokens);

unsigned int json_state_machine(unsigned char* p_ch, struct t_json_tokens* p_json_tokens, StrMap *p_json, struct t_linked_info *linked_list);

struct t_json_tokens *new_json_tokens();

StrMap* json_decode(const unsigned char* json_str, size_t json_str_len);

char *get_json_str(StrMap* p_json_map, const char *key, size_t str_len_limit=0, bool do_throw=false);

struct t_number *get_json_no(StrMap* p_json_map, const char *key, bool do_throw=false);

char *jstr_schema(StrMap* p_json_map, const char *key, const char *p_cstr_pattern=0, size_t str_len_limit=0, bool str_is_hex=0, bool return_bytes=0, bool do_throw=true);

struct t_number *jno_schema(
	StrMap* p_json_map, const char *key,
	char *p_cstr_exact_list_filter=0,
	struct t_number gte_filter=N(0),
	struct t_number lte_filter=N(0),
	unsigned int op=LOGIC_AND,
	bool do_throw=true
);
