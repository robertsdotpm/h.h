// Todo: {} as test vector seems to cause mem corruption?

// Build the full name of a key pair by looking at the
// chain of sub trees currently on the stack.
unsigned char *get_json_key_name(struct t_linked_info* linked_list)
{
	// Starting vars.
	const size_t key_name_size = 1024;
	const size_t sub_key_size = 100;
	size_t offset = 0;
	size_t sub_key_len = 0;
	size_t name_len = 0;

	// More starting values.
	unsigned char sub_key[sub_key_size] = { 0 };
	unsigned int not_last_key = 0;
	unsigned int i = 0;
	unsigned char* key_name = (unsigned char*) calloc(key_name_size, sizeof(unsigned char));
	if (!key_name)
	{
		return NULL;
	}

	// Iterate over linked list and generate a key name.
	struct t_json_tokens* p_json_tokens = 0;
	struct t_linked_item* p_item = NULL;
	while ((p_item = TREAD(linked_list, p_item)) != NULL)
	{
		p_json_tokens = (struct t_json_tokens *) p_item->value;

		// Root name.
		if (i == 0)
		{
			// Sanity check.
			if (!p_json_tokens->name)
			{
				fprintf(stderr, "%s", "sub key name not found\r\n");
				return NULL;
				// Todo add cleanup.
			}

			// Copy sub key name.
			name_len = strnlen_s((char*) p_json_tokens->name, sub_key_size - 1);
			strncpy_s((char*) sub_key, sub_key_size, (char*) p_json_tokens->name, name_len);
			sub_key[name_len] = '\0';
		}
		else
		{
			// Copy sub-key.
			if (p_json_tokens->tree_type == JSON_obj)
			{
				// Sanity check.
				if (!p_json_tokens->name)
				{
					fprintf(stderr, "%s", "sub key name not found\r\n");
					return NULL;
				}

				name_len = strnlen_s((char*) p_json_tokens->name, sub_key_size - 1);
				strncpy_s((char*) sub_key, sub_key_size, (char*)p_json_tokens->name, name_len);
				sub_key[name_len] = '\0';
			}
			else
			{
				//assert(p_json_tokens->key_pair_no);
				not_last_key = (unsigned int) (i + 1 < linked_list->no ? 1 : 0);
				snprintf((char*)sub_key, sub_key_size, "%d", p_json_tokens->key_pair_no - not_last_key);
			}
		}

		// Calculate sub-key len.
		// +2 == chars [ and ] around sub key.
		sub_key_len = strnlen_s((char*) sub_key, sub_key_size - 1);
		if (sub_key_len)
		{

			// Avoid overflowing key_name buffer.
			if (sub_key_len + offset + 2 >= key_name_size - 2)
			{
				break;
			}

			// Copy sub key to key_name buffer.
			snprintf((char*) (key_name + offset), ((sub_key_len + 2) % (key_name_size - (offset + 1))) + 1, "[%s]", sub_key);

			// Increase key_name offset.
			offset += sub_key_len + 2;
		}

		// Increase p_json_token count seen.
		i++;

		// Null sub_key buf from perspective of strlen.
		memset(sub_key, 0, sub_key_size);
		sub_key_len = 0;
	}

	// Null terminate key_name just to be safe.
	key_name[key_name_size - 1] = '\0';

	// Return the new key_name.
	return p_json_tokens ? key_name : NULL;
}

// Put a value pulled from JSON in the hash map for the right key.
void json_save_key_pair(struct t_json_tokens* p_json_tokens, struct StrMap *p_json, struct t_linked_info* linked_list)
{
	// What is the tree type?
	#ifdef JSON_DEBUG
		printf("Tree type: '%d'\r\n", p_json_tokens->tree_type);
	#endif

	// Will be used for key name.
	unsigned char *p_key = 0;

	// Save any found values to the expr value struct on the heap.
	// We do this because the expr struct in p_json_expr is reused
	// for other values and lives on the stack hence gets destroyed.
    struct t_json_expr *p_json_expr = (struct t_json_expr *) malloc(sizeof(struct t_json_expr));
	memset(p_json_expr, 0, sizeof(struct t_json_expr));
    memcpy(p_json_expr, &p_json_tokens->expr, sizeof(struct t_json_expr));

	// Number values.
    if(p_json_expr->type == JSON_no)
    {
		//What value is this?
		#ifdef JSON_DEBUG
			printf("Packing val into t_num '%s'\r\n", (char *) p_json_tokens->expr.p_no_str);
		#endif

		// Avoid number overflows.
		trim_ws((char*)p_json_tokens->expr.p_no_str);
		if(strlen((char *) p_json_tokens->expr.p_no_str) > MAX_UINT128_PRECISION)
		{
			goto json_save_cleanup;
		}

		// Check this thing looks like a valid number.
	    if(!re_match("^[0-9]+([.][0-9]+)?$", (char *) p_json_tokens->expr.p_no_str))
	    {
	        goto json_save_cleanup;
	    }

		p_json_expr->p_no = (struct t_number *) calloc(1, sizeof(struct t_number));
		//assert(p_json_tokens->expr.p_no_str);
		*(p_json_expr->p_no) = Ns((char*) p_json_tokens->expr.p_no_str, 0);

    }
    else // String literals.
    {
        p_json_expr->p_str = (unsigned char *) p_json_tokens->expr.p_str;

    }

    // Handle sub-tree storage.
	p_key = get_json_key_name(linked_list);
	if (!p_key)
	{
		// Cant get json key name
		goto json_save_cleanup;
	}

    // Quit if already saved.
    if(map_get(p_json, (const char *) p_key) != 0)
    {
        goto json_save_cleanup;
    }

    // list: code added to record value section based on i.
	#ifdef JSON_DEBUG
		if(p_json_expr->type == JSON_str && p_json_tokens->expr.p_str)
		{
			printf("Saving key '%s' = '%s'\r\n", (char *) p_key, (char *) p_json_tokens->expr.p_str);
		}
		else
		{
			printf("Saving key '%s'\r\n", (char *) p_key);
			if (p_json_expr->p_no)
			{
				PN(*((struct t_number*) p_json_expr->p_no));
			}
			else
			{
				// Number type but it wasnt set for some reason.
				goto json_save_cleanup;
			}
		}
	#endif

    // Store the key pair in the hash map.
    if(!map_put(p_json, (const char *) p_key, p_json_expr))
	{
		#ifdef JSON_DEBUG
			printf("Failed to save key.");
			sm_enum(p_json, sm_iter, NULL);
		#endif
	}
    p_json_tokens->key_pair_no++;

    // Deallocate temporary memory.
	json_save_cleanup:
		if (p_key)
		{
			free(p_key);
		}

		memset(&p_json_tokens->expr, 0, sizeof(struct t_json_expr));

}

// Remove processed JSON sub tree from process stack.
struct t_json_tokens *pop_json_token_sub_tree(struct t_linked_info *linked_list, struct t_json_tokens *p_json_tokens)
{
	#ifdef JSON_DEBUG
		printf("popping sub tree \r\n");
	#endif

	// Update list references from linked list.
	struct t_linked_item* old = linked_list_pop(linked_list);
	if (!linked_list->no)
	{
		return p_json_tokens;
	}

	// Deallocate that list item and its value.
	delete_list_item(old);

	// Get a reference to the value before the popped value in the list.
    struct t_json_tokens *p = (struct t_json_tokens *) linked_list->p_list_end->value;
	if (p == NULL)
	{
		printf("memory error\r\n");
		exit(1);
	}
	else
	{
		// Return the new token value struct.
		// The parser keeps processing from this point resembling recursion.
		memset(&(p->expr), 0, sizeof(struct t_json_expr));
		p->name = 0;
		return p;
	}
}

// Process stream of JSON characters in order.
unsigned int json_state_machine(unsigned char* p_ch, struct t_json_tokens* p_json_tokens, struct StrMap *p_json, struct t_linked_info *linked_list)
{
	#ifdef JSON_DEBUG
		printf("%c=%d\r\n", *p_ch, p_json_tokens->expect);
	#endif

	// End of string reached.
	if (*p_ch == '\0')
	{
        p_json_tokens->expect = JSON_close_or_comma_expr;
		return 0;
	}

	// Transition to first state.
	if (*p_ch == '"' && p_json_tokens->expect == JSON_any)
	{
        p_json_tokens->expect = JSON_any_quotes;
	}

	// Strong input validation.
	unsigned int json_error = 0;
	switch (p_json_tokens->expect)
	{
		// [\S]*.
		case JSON_any:
			break;

		// Start a new name.
		case JSON_any_quotes:
			// Allow for a JSON obj as an expression in a list.
			if (*p_ch == '{')
			{
				p_json_tokens->expect = JSON_open_or_expr;
				return json_state_machine(p_ch, p_json_tokens, p_json, linked_list);
			}

			// Start of a name.
			if (*p_ch == '"')
			{
                p_json_tokens->expect = JSON_any_then_close_name;
				break;
			}

			// Allow for the start of a key name after a common list of values.
			if (*p_ch == ',')
            {
			    p_json_tokens->expect = JSON_any_quotes;
			    break;
            }

			json_error = 1;
			break;

		// Inside of a name.
		case JSON_any_then_close_name:
			if (*p_ch != '"')
			{
                p_json_tokens->name = p_ch;
                p_json_tokens->expect = JSON_any_or_quotes;
				break;
			}

			json_error = 2;
			break;

		// Continue a name.
		case JSON_any_or_quotes:
			if (*p_ch != '"')
			{
                p_json_tokens->expect = JSON_any_or_quotes;
				break;
			}
			else
			{
				*p_ch = '\0';
                p_json_tokens->expect = JSON_colon_then_open_or_expr;
				break;
			}

			json_error = 3;
			break;

		// Seperate name and value.
		case JSON_colon_then_open_or_expr:
			if (*p_ch == ':')
			{
                p_json_tokens->expect = JSON_open_or_expr;
				break;
			}

			json_error = 4;
			break;

		// Check type of value -- new tree or expr?
		case JSON_open_or_expr:
			// New obj sub tree -- go back to the start.
			if (*p_ch == '{')
			{
				p_json_tokens->expect = JSON_any;
				return JSON_obj;
			}

			// New list sub tree.
			else if (*p_ch == '[')
			{

				p_json_tokens->expect = JSON_open_or_expr; //json expr
				return JSON_list;
			}

			// Deliminate a list of expressions.
			else if (*p_ch == ',')
			{
				p_json_tokens->expect = JSON_open_or_expr;
				break;
			}

			// Ignore this.
			else if(is_whitespace((char) *p_ch))
			{
                p_json_tokens->expect = JSON_open_or_expr;
			}

			// Otherwise it's an expression.
			else
            {
                p_json_tokens->expect = JSON_expr;
                return json_state_machine(p_ch, p_json_tokens, p_json, linked_list);
            }

			break;

		// Inside a string value.
		// Part of evaluating a string literal expr.
		// Detect if we want to close it or continue.
		case JSON_str_any_or_close:
			if (*p_ch == '"') // close.
			{
				*p_ch = '\0';
                p_json_tokens->expr.type = JSON_str;
                json_save_key_pair(p_json_tokens, p_json, linked_list);
				if (p_json_tokens->tree_type == JSON_list)
				{
					p_json_tokens->expect = JSON_close_or_comma_expr;
				}
				else
				{
					p_json_tokens->expect = JSON_any;
				}
				break;
			}
			else
			{
				// Point to start of value str.
                if(p_json_tokens->expr.type && !p_json_tokens->expr.p_str)
                {
                    p_json_tokens->expr.p_str = p_ch;
                }


                p_json_tokens->expect = JSON_str_any_or_close;
				break;
			}

			json_error = 5;
			break;

		// Match string / int / float.
		// "..." / 33 / 324234.234234
		// Detect what type of value an expression is, where it starts, and where it stops.
		case JSON_expr:
			// Start of string literal.
			if (*p_ch == '"')
			{
                p_json_tokens->expr.type = JSON_str;
                p_json_tokens->expect = JSON_str_any_or_close;
				break;
			}
			else
			{
				// Point to start of JSON value;
                if(p_json_tokens->expr.type == JSON_str && !p_json_tokens->expr.p_str)
                {
                    p_json_tokens->expr.p_str = p_ch;
                }

				// Start of new number expression.
                if(!p_json_tokens->expr.type && !is_whitespace((char) *p_ch))
                {
                    p_json_tokens->expr.type = JSON_no;
                    p_json_tokens->expr.p_no_str = p_ch;
                }

				// Ignore white space.
                if(is_whitespace((char) *p_ch) && p_json_tokens->expr.type)
                {
                    p_json_tokens->expect = JSON_expr;
                }
                else
                {
					// Otherwise continue an expression.
                    p_json_tokens->expect = JSON_any_or_end_expr;
                }

				break;
			}

			json_error = 6;
			break;

		// Once an expression is classified we end up here.
		// An expression ends here for sure.
		case JSON_any_or_end_expr:
			// Keep going until we reach the end.
			if (*p_ch != ',' && *p_ch != '}' && *p_ch != ']')
			{
				p_json_tokens->expect = JSON_any_or_end_expr;
				break;
			}
			else
            {
				// End reached -- do special processing for numbers.
                if(p_json_tokens->expr.type == JSON_no)
                {
                    *p_ch = '\0';
                    json_save_key_pair(p_json_tokens, p_json, linked_list);
                }

				// ... we might be in a list so we don't break on detecting end.
            }

		// Look for end of tree or new key value pair.
		case JSON_close_or_comma_expr:
            // Look for close.
            if (*p_ch == '}' || *p_ch == ']')
            {
                *p_ch = '\0';
                if(p_json_tokens->expr.type)
                {
                    json_save_key_pair(p_json_tokens, p_json, linked_list);
                }

                p_json_tokens->expect = JSON_left_tree;
                break;
            }

			// New expression follows -- Reset the parser.
			if (*p_ch != ',' && !is_whitespace((char) *p_ch))
			{
				// Process sub tree as direct expression.
				if (*p_ch == '{' || *p_ch == '[')
				{
					p_json_tokens->expect = JSON_open_or_expr;
					return json_state_machine(p_ch, p_json_tokens, p_json, linked_list);
				}

				// Possible we're inside a list here.
				// So continue processing that chain of expressions.
                if(p_json_tokens->tree_type == JSON_obj)
                {
                    p_json_tokens->expect = JSON_any; // json any
                    return json_state_machine(p_ch, p_json_tokens, p_json, linked_list);
                }
                else
                {
                    p_json_tokens->expect = JSON_expr; //json expr
                    return json_state_machine(p_ch, p_json_tokens, p_json, linked_list);
                }

				break;
			}

			break;

		default:
			break;
	}

	// There may be white space between most major tokens that gets ignored.
	if (is_whitespace((char) *p_ch))
	{
		json_error = 0;
	}

	return json_error;
}

// Store information on a new sub tree.
struct t_json_tokens *new_json_tokens()
{
    struct t_json_tokens *p_json_tokens = (struct t_json_tokens *) calloc(1, sizeof(struct t_json_tokens));
    p_json_tokens->expect = JSON_any;
    p_json_tokens->tree_type = JSON_obj;

    return p_json_tokens;
}

// Main function for decoding JSON.
struct StrMap* json_decode(const char* json_str, size_t json_str_len)
{
	// Declare variables.
	unsigned int json_error = 0;
	char ch = 0;
	unsigned int tree_type = 0;
	bool open_found = 0;
	struct t_json_tokens* p_json_tokens = 0;
	struct t_json_tokens* p_json_tokens_sub_tree = 0;
	struct t_linked_info* linked_list = 0;
	struct StrMap* p_json = 0;

	// Function should be easy to use and accept
	// any memory region that might quickly go out of scope
	// hence we copy it to the heap to be safe.
	unsigned char* str_heap = (unsigned char*) calloc(json_str_len + 1, sizeof(unsigned char));
	if (str_heap == 0)
	{
		goto json_decode_cleanup;
	}
	memcpy(str_heap, json_str, json_str_len);

	// Allocate room to store JSON key value pair mappings.
	p_json = map_create(1024);
	if(!p_json)
	{
		printf("Cannot allocate hash map!!\r\n");
		exit(1);
	}

	// Collection of json token counts.
	p_json_tokens = new_json_tokens();

	// Manage nestled trees of tokens in JSON.
	linked_list = create_linked_list_info();
	add_value_to_linked_list(linked_list, p_json_tokens);

	// Skip all chars before the first {.
	for (size_t i = 0; i < json_str_len; i++)
	{
		if (str_heap[i] == '{')
		{
			str_heap = &str_heap[i];
			json_str_len -= i + 1;
			open_found = true;
			break;
		}
	}

	// No open brace found.
	if (!open_found)
	{
		goto json_decode_cleanup;
	}

	// Start processing the main JSON here.
	for (size_t i = 0; i < json_str_len && linked_list->no && linked_list->no < 1024; i++)
	{
		ch = (char) str_heap[i];

		// Process current char based on finite state machine.
		json_error = json_state_machine(&str_heap[i], p_json_tokens, p_json, linked_list);
		p_json_tokens = (struct t_json_tokens*) linked_list->p_list_end->value;

		// Parse sub tree.
		if (json_error == JSON_obj || json_error == JSON_list)
		{
			// Add sub tree to head of stack.
			p_json_tokens_sub_tree = new_json_tokens();
			p_json_tokens_sub_tree->tree_type = json_error;

			// Increase element know for current tree.
			if (p_json_tokens->tree_type == JSON_list)
			{
				p_json_tokens->key_pair_no++;
			}

			// Change expectation type if it's a list.
            p_json_tokens = p_json_tokens_sub_tree;
		    if(json_error == JSON_list)
            {
		        p_json_tokens->expect = JSON_open_or_expr;
            }

			// Record sub tree for recursive processing.
            add_value_to_linked_list(linked_list, p_json_tokens);
        }

		// Done processing tree.
		else if(ch == ']' || ch == '}')
        {
			//JSON_open_or_expr
			tree_type = p_json_tokens->tree_type;
            p_json_tokens = pop_json_token_sub_tree(linked_list, p_json_tokens);

			// If process stack is one then we're at root of tree.
			// The only valid elements are still key: value pairs.
			if (linked_list->no == 1)
			{
				p_json_tokens->expect = JSON_any_quotes;
			}
			else
			{
				// Otherwise what we expect next depends on the new
				// head of the process stack. Lists have a different
				// structure to a dict -- advance state machine.
				if (tree_type == JSON_list)
				{
					p_json_tokens->expect = JSON_open_or_expr;
				}
				else
				{
					p_json_tokens->expect = JSON_any_quotes;
				}
			}
        }

        // Error occurred.
		else if(json_error)
		{
			break;
		}

		json_error = 0;
	}

	json_decode_cleanup:
		// Delete remaining sub trees.
		if (linked_list)
		{
			delete_linked_list(linked_list, 0);
		}

		// Deallocate heap memory.
		if(json_error)
		{
			// Remove heap copy of json str.
			if (str_heap)
			{
				free(str_heap);
			}

			// Delete hash map.
			if (p_json)
			{
				map_destroy(p_json);
			}

			
			fprintf(stderr, "%d", json_error);
			return NULL;
		}

	return p_json;
}


/*
    // Pull pub key from json..
    uint8_t pub_key[32 + 1] = {};
    void *json_result = map_get(p_json, (unsigned char *) "[auth][pub]");
    if(!json_result)
    {
        return 0;
    }
    struct t_json_expr* json_expr = (struct t_json_expr*) json_result;
    if(json_expr->type != JSON_str)
    {
        return 0;
    }
*/

char *get_json_str(struct StrMap* p_json_map, const char *key, size_t str_len_limit, bool do_throw)
{
	void *json_result = map_get(p_json_map, key);
	if(!json_result)
	{
		if(do_throw)
		{
			printf("Key not in json.\r\n");
			exit(1);
		}
		return 0;
	}
	else
	{
	    struct t_json_expr* json_expr = (struct t_json_expr*) json_result;
	    if(json_expr->type != JSON_str)
	    {
			if(do_throw)
			{
				printf("incorrect json value type found\r\n");
				exit(1);
			}
	        return 0;
	    }
		else
		{
			if(str_len_limit)
			{
				size_t str_len = strlen((char *) json_expr->p_str);
				if(str_len > str_len_limit)
				{
					if(do_throw)
					{
						printf("Incorrect json value strlen\r\n");
						exit(1);
					}
					return 0;
				}
			}

			return (char *) json_expr->p_str;
		}
	}
}

struct t_number *get_json_no(struct StrMap* p_json_map, const char *key, bool do_throw)
{
	void *json_result = map_get(p_json_map, key);
	if(!json_result)
	{
		if(do_throw)
		{
			printf("Key not found in json\r\n");
			exit(1);
		}
		return 0;
	}
	else
	{
	    struct t_json_expr* json_expr = (struct t_json_expr*) json_result;
	    if(json_expr->type != JSON_no)
	    {
			if(do_throw)
			{
				printf("Incorrect value type in json\r\n");
				exit(1);
			}
	        return 0;
	    }
		else
		{
			return json_expr->p_no;
		}
	}
}

char *jstr_schema(struct StrMap* p_json_map, const char *key, const char *p_cstr_pattern, size_t str_len_limit, bool str_is_hex, bool return_bytes, bool do_throw)
{
	char *p_cstr_buf = get_json_str(p_json_map, key, str_len_limit, do_throw);
	if(!p_cstr_buf) return 0;

	// Validate data against regex pattern.
	if(p_cstr_pattern)
	{
		if(!re_match(p_cstr_pattern, p_cstr_buf))
		{
			if(do_throw)
			{
				printf("Pattern does not match str in json schema.\r\n");
				exit(1);
			}

			return 0;
		}
	}

	// Is this hex?
	if(str_is_hex)
	{
		if(!is_hex(p_cstr_buf))
		{
			if(do_throw)
			{
				printf("JSON value is malformed hex.\r\n");
				exit(1);
			}

			return 0;
		}
	}

	// Return bytes instead of chars.
	if(return_bytes)
	{
		size_t cstr_len = strlen(p_cstr_buf);
		size_t buf_size = (cstr_len * 2) + 1;
		char *p_bytes = (char *) calloc(buf_size, sizeof(char));
		if(!p_bytes)
		{
			if(do_throw)
			{
				printf("cannot alloc new memory for byte str in json schema\r\n");
				exit(1);
			}

			return 0;
		}

		if(hexstr_to_bytes(p_cstr_buf, cstr_len,
			(unsigned char*) p_bytes, buf_size) != buf_size - 1)
		{
			if(do_throw)
			{
				printf("Unknown error conv hex to bytes in json val schema\r\n");
				exit(1);
			}

			return 0;
		}

		p_cstr_buf = p_bytes;
	}

	return p_cstr_buf;
}

struct t_number *jno_schema(
	struct StrMap* p_json_map, const char *key,
	char *p_cstr_exact_list_filter,
	struct t_number gte_filter,
	struct t_number lte_filter,
	unsigned int op,
	bool do_throw
)
{
	struct t_number *p_no = get_json_no(p_json_map, key, do_throw);
	if(!p_no) return 0;

	size_t exact_list_filter_size = strlen(p_cstr_exact_list_filter);
	char *p_cstr_exact_filter = &p_cstr_exact_list_filter[0];

	// Process exact match filters.
	if(p_cstr_exact_list_filter)
	{
		bool match_found = true;
		for(size_t i = 0; i < exact_list_filter_size && p_cstr_exact_filter; i++)
		{
			if(p_cstr_exact_list_filter[i] == ',' || i == exact_list_filter_size - 1)
			{
				// Terminate current filter.
				if(p_cstr_exact_list_filter[i] == ',')
				{
					p_cstr_exact_list_filter[i] = '\0';
				}

				// Quit.
				if(!p_cstr_exact_filter)
				{
					break;
				}

				// Validate current number against this.
				if(safe_logic(BOTH_EQUALS, Ns(p_cstr_exact_filter, 0), *p_no, 0))
				{
					match_found = true;
					break;
				}

				// Set start of next filter.
				p_cstr_exact_filter = &p_cstr_exact_list_filter[i + 1];
				i++;
			}
		}

		if(!match_found)
		{
			if(do_throw)
			{
				printf("Exact match failed for list of nos.\r\n");
				exit(1);
			}

			return 0;
		}
	}

	// Process range filters.
	if(safe_logic(NOT_EQUALS, gte_filter, Ns("0", 0), 0) && safe_logic(NOT_EQUALS, lte_filter, Ns("0", 0), 0))
	{
		// Do AND compare.
		if(op == LOGIC_AND)
		{
			if(!(safe_logic(GREATER_EQUALS, gte_filter, *p_no, 0) &&
				 safe_logic(LESS_EQUALS, lte_filter, *p_no, 0)) )
			{
				if(do_throw)
				{
					printf("AND filters failed for json schema.\r\n");
					exit(1);
				}

				return 0;
			}
		}

		// Do OR compare.
		if(op == LOGIC_OR)
		{
			if(!(safe_logic(GREATER_EQUALS, gte_filter, *p_no, 0) ||
				 safe_logic(LESS_EQUALS, lte_filter, *p_no, 0)) )
			{
				if(do_throw)
				{
					printf("OR filters failed for json schema.\r\n");
					exit(1);
				}

				return 0;
			}
		}
	}

	return p_no;
}

// precision checks for no?
// todo: add better input validation checking to N since input now passes through it. reject everything outside [0-9.]
