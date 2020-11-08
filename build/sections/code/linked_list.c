
void delete_list_item(struct t_linked_item *list_item)
{
  if (list_item)
	{
        // Todo: add dealloc funcs.
        /*
		if (list_item->value)
		{
			delete list_item->value;
		}
        */

		free(list_item);
	}
}


struct t_linked_item * add_value_to_linked_list(struct t_linked_info *p_info, void *p_value)
{
    // Make new list item container.
    struct t_linked_item *p_item = (struct t_linked_item *) malloc(sizeof(struct t_linked_item));
    p_item->p_next = NULL;
    p_item->p_prev = NULL;

    // Start of list.
    if(p_info->no == 0)
    {
        p_info->p_list_start = p_item;
        p_info->p_list_end = p_item;
    }
    else
    {
        // Link to existing list.
        p_item->p_prev = p_info->p_list_end;

        // Update quick reference to list end.
        p_info->p_list_end->p_next = p_item;

        // Point to new list end.
        p_info->p_list_end = p_item;
    }

    // Update list item value.
    p_item->value = p_value;

    // Increase number of list elements.
    p_info->no++;

    return p_item;
}

struct t_linked_item *TREAD(struct t_linked_info *p_list_info, struct t_linked_item *p_list_item)
{
    if(p_list_item != NULL)
    {
        return (struct t_linked_item *) p_list_item->p_next;
    }

    if(p_list_info->p_list_start != NULL)
    {
        return (struct t_linked_item *) p_list_info->p_list_start;
    }

    return NULL;
}

void remove_value_from_linked_list(
        struct t_linked_info *list, void *value
        )
{
        struct t_linked_item *p_list_item = list->p_list_start;
        struct t_linked_item *p_next = NULL;
        while(p_list_item != NULL)
        {
                p_next = (struct t_linked_item *) p_list_item->p_next;
                if(p_list_item->value == value)
                {
                        // List has at least 2 elements.
                        // Offset >= 1, delete that element.
                        if(p_list_item->p_prev != NULL)
                        {
                                // Change prev to point to offset >= 2, skipping current offset.
                                // If that offset doesn't exist, it will be set to null.
                                //                                             ---------------------->
                                // Now point the next element to the previous [n] [n + 1](deleted) [?]
                                ((struct t_linked_item *) p_list_item->p_prev)->p_next = p_next;

                                // List offset >= 3
                                //                                             <----------------------
                                // Now point the next element to the previous [n] [n + 1](deleted) [n + 2]
                                if (p_next)
                                {
                                        p_next->p_prev = p_list_item->p_prev;
                                }
                        }

                        // First list item is being deleted.
                        // Offset >= 0. Point first element to next offset, skipping current item.
                        // ------------------->
                        // [List info.start..] [n] [n + 1](deleted)
                        if (list->p_list_start == p_list_item)
                        {
                                list->p_list_start = (struct t_linked_item*) p_next;
                        }

                        // Offset >= 0. Point last element to prev offset, skipping current item.
                        // ------------------->
                        // [List info.end..] [n] [n + 1](deleted)
                        if (list->p_list_end == p_list_item)
                        {
                                list->p_list_end = (struct t_linked_item*) p_list_item->p_prev;
                        }

                        // It's unsigned so avoid underflow and throw on weird lists.
                        if (list->no)
                        {
                                list->no -= 1;
                        }
                        else
                        {
                                printf("List no underflow");
                                exit(1);
                        }

                        free(p_list_item);
                        p_list_item = 0;
                }

                p_list_item = p_next;
        }
}

void remove_values_from_linked_list(
    struct t_linked_info *hay_list,
    struct t_linked_info *needle_list
)
{
    struct t_linked_item *needle_item = needle_list->p_list_start;
    struct t_linked_item *p_next = NULL;
    while(needle_item != NULL)
    {
        p_next = (struct t_linked_item *) needle_item->p_next;
        if(needle_item->value != NULL)
        {
            remove_value_from_linked_list(
                hay_list,
                needle_item->value
            );
        }

        needle_item = p_next;
    }
}

// Append list_b to list_a.
void join_linked_lists(
    struct t_linked_info *list_a,
    struct t_linked_info *list_b
)
{
    if(list_a->p_list_end != NULL)
    {
        list_a->p_list_end->p_next = list_b->p_list_start;
        list_a->p_list_end = list_b->p_list_end;
        list_a->no += list_b->no;
    }
    else // List a is empty.
    {
		list_a->no = list_b->no;
		list_a->p_list_start = list_b->p_list_start;
		list_a->p_list_end = list_b->p_list_end;
    }
}

struct t_linked_item * linked_list_pop(struct t_linked_info *list)
{
    struct t_linked_item *p_list_end = NULL;
    struct t_linked_item *p_prev = NULL;
    if(list->no)
    {
        p_list_end = (struct t_linked_item *) list->p_list_end;
        if(p_list_end->p_prev != NULL)
        {
            p_prev = (struct t_linked_item *) p_list_end->p_prev;
            p_prev->p_next = NULL;
        }

        list->p_list_end = p_prev;
        //delete p_list_end;
        list->no--;
    }

    // Returns 'popped item.'
    // Note: popped isn't deleted.
    return p_list_end;
}

void delete_linked_list(struct t_linked_info *p_allocations, void (*delete_list_value)(void *))
{
    struct t_linked_item *p_item = NULL;
    struct t_linked_item *p_next = NULL;
    while((p_item = TREAD(p_allocations, p_item)) != NULL)
    {
        // Save ref to next item (if one) since p_item = boom.
        p_next = (struct t_linked_item *) p_item->p_next;

        // Deallocate the value stored at this list location.
        if(delete_list_value)
        {
            delete_list_value(p_item->value);
        }
        else
        {
            // Delete the list meta data struct.
            delete_list_item(p_item);
        }

        p_item = NULL;

        // Update the 'start' of the list.
        p_allocations->p_list_start = p_next;
    }

    // Zero list info struct.
    p_allocations->no = 0;
    p_allocations->p_list_start = NULL;
    p_allocations->p_list_end = NULL;
}

struct t_linked_info *create_linked_list_info()
{
    struct t_linked_info *p = (struct t_linked_info *) malloc(sizeof(struct t_linked_info));
    memset(p, 0, sizeof(struct t_linked_info));
    return p;
}
