struct t_linked_item {
    void *value;
    void *p_prev;
    void *p_next;
};

struct t_linked_info {
    unsigned int no;
    struct t_linked_item *p_list_start;
    struct t_linked_item *p_list_end;
};

void delete_list_item(struct t_linked_item *list_item);

struct t_linked_item * add_value_to_linked_list(struct t_linked_info *p_info, void *p_value);

struct t_linked_item *TREAD(struct t_linked_info *p_list_info, struct t_linked_item *p_list_item);

void remove_value_from_linked_list(
    struct t_linked_info *list, void *value
);

void remove_values_from_linked_list(
    struct t_linked_info *hay_list,
    struct t_linked_info *needle_list
);

void join_linked_lists(
    struct t_linked_info *list_a,
    struct t_linked_info *list_b
);

struct t_linked_item * linked_list_pop(struct t_linked_info *list);

void delete_linked_list(struct t_linked_info *p_allocations, void (*delete_list_value)(void *)=0);

struct t_linked_info *create_linked_list_info();
