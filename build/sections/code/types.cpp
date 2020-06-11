
void init_state(struct t_state *p_state)
{
    memset(p_state, 0, sizeof(struct t_state));
    p_state->accounts = map_create(256);
    p_state->matches = map_create(256);
}

void *init_empty(void *p)
{
    return p;
}

void *new_summary()
{
    void *p_summary = new struct t_summary;
    return p_summary;
}
