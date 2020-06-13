/////////////////////////////////////////////////////////////////
// <Start Hashmap Code: http://pokristensson.com/strmap.html>
/////////////////////////////////////////////////////////////////

struct StrMap *sm_new(unsigned int capacity)
{
    struct StrMap *map;

    map = (struct StrMap *) malloc(sizeof(StrMap));
    if (map == NULL) {
        return NULL;
    }
    map->count = capacity;
    map->buckets = (struct Bucket *) malloc(map->count * sizeof(Bucket));
    if (map->buckets == NULL) {
        printf("CANT ALLOCATE BUCKETS \r\n");
        free(map);
        assert(0);
        return NULL;
    }
    memset(map->buckets, 0, map->count * sizeof(Bucket));
    return map;
}

void sm_iter(const char *key, const char *value, const void *obj)
{
    if(key)
    {
        printf("found key: %s \n", value);

    }
    
    if(obj)
    {
        printf("obj");
    }
}

void sm_delete(StrMap *map)
{
    unsigned int i, j, n, m;
    Bucket *bucket;
    Pair *pair;

    if (map == NULL) {
        return;
    }
    n = map->count;
    bucket = map->buckets;
    i = 0;
    while (i < n) {
        m = bucket->count;
        pair = bucket->pairs;
        j = 0;
        while(j < m) {
            free(pair->key);
            free(pair->value);
            pair++;
            j++;
        }
        free(bucket->pairs);
        bucket++;
        i++;
    }
    free(map->buckets);
    free(map);
}

size_t sm_get(const StrMap *map, const char *key, char *out_buf, size_t n_out_buf)
{
    unsigned int index;
    Bucket *bucket;
    Pair *pair;

    if (map == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM get map is null \r\n");
        #endif
        return 0;
    }
    if (key == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM get key is null \r\n");
        #endif
        return 0;
    }
    index = map_hash(key) % map->count;
    #if defined(JSON_DEBUG)
        printf("hash map index = '%d'\r\n", index);
    #endif
    
    bucket = &(map->buckets[index]);
    pair = get_pair(bucket, key);
    if (pair == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM get pair is null \r\n");
        #endif
        return 0;
    }
    if (out_buf == NULL && n_out_buf == 0) {
        #if defined(JSON_DEBUG)
            printf("SM get returned strlen \r\n");
        #endif
        return strlen(pair->value) + 1;
    }
    if (out_buf == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM get out buf is null \r\n");
        #endif
        return 0;
    }
    if (strlen(pair->value) >= n_out_buf) {
        #if defined(JSON_DEBUG)
            printf("SM get overflow \r\n");
        #endif
        return 0;
    }

    if (pair->value)
    {
        size_t value_len = strlen(pair->value);
        strncpy_s(out_buf, n_out_buf, pair->value, value_len);

    }
    return 1;
}

int sm_exists(const StrMap *map, const char *key)
{
    unsigned int index;
    Bucket *bucket;
    Pair *pair;

    if (map == NULL) {
        return 0;
    }
    if (key == NULL) {
        return 0;
    }
    index = map_hash(key) % map->count;
    bucket = &(map->buckets[index]);
    pair = get_pair(bucket, key);
    if (pair == NULL) {
        return 0;
    }
    return 1;
}

size_t sm_put(StrMap *map, const char *key, const char *value)
{
    size_t key_len, value_len, index;
    Bucket *bucket;
    Pair *tmp_pairs, *pair;
    char *tmp_value;
    char *new_key, *new_value;

    if (map == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM map is null! \r\n");
        #endif
        return 0;
    }
    if (key == NULL || value == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM map key or val is null! \r\n");
        #endif
        return 0;
    }
    key_len = strlen(key);
    value_len = strlen(value);
    #if defined(JSON_DEBUG)
        printf("hashmap put key len %d \r\n", key_len);
        printf("hashmap put value len %d \r\n", value_len);
    #endif
    
    
    /* Get a pointer to the bucket the key string hashes to */
    index = map_hash(key) % map->count;
    #if defined(JSON_DEBUG)
        printf("hash map index = '%d'\r\n", index);
    #endif
    
    bucket = &(map->buckets[index]);
    
    #if defined(JSON_DEBUG)
        if(!bucket)
        {
            printf("Bucket was null \r\n");
        }
    #endif
    
    /* Check if we can handle insertion by simply replacing
     * an existing value in a key-value pair in the bucket.
     */
    if ((pair = get_pair(bucket, key)) != NULL) {
        /* The bucket contains a pair that matches the provided key,
         * change the value for that pair to the new value.
         */
        if (strlen(pair->value) < value_len) {
            /* If the new value is larger than the old value, re-allocate
             * space for the new larger value.
             */
            tmp_value = (char *) realloc(pair->value, (value_len + 1) * sizeof(char));
            if (tmp_value == NULL) {
                #if defined(JSON_DEBUG)
                    printf("SM map early realloc failed \r\n");
                #endif                
                return 0;
            }
            pair->value = tmp_value;
        }
        /* Copy the new value into the pair that matches the key */
        strncpy_s(pair->value, value_len + 1, value, value_len);
        #if defined(JSON_DEBUG)
            printf("\r\na\r\n");
        #endif

        return 1;
    }
        
    /* Allocate space for a new key and value */
    new_key = (char *) calloc((key_len + 1), sizeof(char));
    if (new_key == NULL) {
        #if defined(JSON_DEBUG)
            printf("SM map malloc failed \r\n");
        #endif
        return 0;
    }
    new_value = (char *)  calloc((value_len + 1), sizeof(char));
    if (new_value == NULL) {
        free(new_key);
        #if defined(JSON_DEBUG)
            printf("SM map malloc 2 failed \r\n");
        #endif
        return 0;
    }
    /* Create a key-value pair */
    if (bucket->count == 0) {
        /* The bucket is empty, lazily allocate space for a single
         * key-value pair.
         */
        bucket->pairs = (struct Pair *) malloc(sizeof(Pair));
        if (bucket->pairs == NULL) {
            free(new_key);
            free(new_value);
            #if defined(JSON_DEBUG)
                printf("SM map malloc 3 failed \r\n");
            #endif
            return 0;
        }
        bucket->count = 1;
        #if defined(JSON_DEBUG)
            printf("\r\nb\r\n");
        #endif
    }
    else {
        /* The bucket wasn't empty but no pair existed that matches the provided
         * key, so create a new key-value pair.
         */
        tmp_pairs = (struct Pair *) realloc(bucket->pairs, (bucket->count + 1) * sizeof(Pair));
        if (tmp_pairs == NULL) {
            free(new_key);
            free(new_value);
            #if defined(JSON_DEBUG)
                printf("SM map realloc failed \r\n");
            #endif
            return 0;
        }
        bucket->pairs = tmp_pairs;
        bucket->count++;
        #if defined(JSON_DEBUG)
            printf("\r\nc\r\n");
        #endif
    }
    /* Get the last pair in the chain for the bucket */
    pair = &(bucket->pairs[bucket->count - 1]);
    // ^ is that valid?
    #if defined(JSON_DEBUG)
        if(!pair)
        {
            printf("PAIR IS NULL \a \r\n");
            return 0;
        }
    #endif
    
    /* Copy the key and its value into the key-value pair */

    memcpy(new_key, key, key_len);
    memcpy(new_value, value, value_len);

    
    pair->key = new_key;
    pair->value = new_value;
    
    #if defined(JSON_DEBUG)
        printf("\r\nd\r\n");
        printf("input key = '%s' \r\n", key);
        printf("input value = '%s' \r\n", value);
        
        printf("pair key = '%s' \r\n", pair->key);
        printf("pair value = '%s' \r\n", pair->value);
    #endif

    return 1;
}

size_t sm_get_count(const StrMap *map)
{
    size_t i, j, n, m;
    size_t count;
    Bucket *bucket;
    Pair *pair;

    if (map == NULL) {
        return 0;
    }
    bucket = map->buckets;
    n = map->count;
    i = 0;
    count = 0;
    while (i < n) {
        pair = bucket->pairs;
        m = bucket->count;
        j = 0;
        while (j < m) {
            count++;
            pair++;
            j++;
        }
        bucket++;
        i++;
    }
    return count;
}

int sm_enum(const StrMap *map, sm_enum_func enum_func, const void *obj)
{
    unsigned int i, j, n, m;
    Bucket *bucket;
    Pair *pair;

    if (map == NULL) {
        return 0;
    }
    if (enum_func == NULL) {
        return 0;
    }
    bucket = map->buckets;
    n = map->count;
    i = 0;
    while (i < n) {
        pair = bucket->pairs;
        m = bucket->count;
        j = 0;
        while (j < m) {
            enum_func(pair->key, pair->value, obj);
            pair++;
            j++;
        }
        bucket++;
        i++;
    }
    return 1;
}

/*
 * Returns a pair from the bucket that matches the provided key,
 * or null if no such pair exist.
 */
static Pair * get_pair(Bucket *bucket, const char *key)
{
    unsigned int i, n;
    Pair *pair;

    n = bucket->count;
    if (n == 0) {
        return NULL;
    }
    pair = bucket->pairs;
    i = 0;
    while (i < n) {
        if (pair->key != NULL && pair->value != NULL) {
            #if defined(JSON_DEBUG)
                printf("cmp '%s' to '%s' \r\n", pair->key, key);
            #endif
            
            if (strcmp(pair->key, key) == 0) {
                return pair;
            }
            
            #if defined(JSON_DEBUG)
                printf("not equal \r\n");
            #endif
        }
        pair++;
        i++;
    }
    return NULL;
}

/*
 * Returns a hash code for the provided string.
 */
static unsigned long map_hash(const char *str)
{
    unsigned long hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + ((unsigned long) c);
    }
    return hash;
}

StrMap *map_create(unsigned int capacity)
{
    return sm_new(capacity);
}

void map_destroy(StrMap *p_map)
{
    sm_delete(p_map);
}

size_t map_put(StrMap *p_map, const char *p_key, void *p_value)
{
    uint64_t value_address_no = (uint64_t) p_value;
    char value_address_str[MAX_MEM_ADDRESS_DIGITS + 1] = {};
    memset(value_address_str, 0, sizeof(value_address_str));
    itoa(value_address_no, value_address_str);
    
    return sm_put(p_map, p_key, (const char *) value_address_str);
}

void *map_get(StrMap *p_map, const char *p_key)
{
    size_t result = 0;
    char value_address_str[MAX_MEM_ADDRESS_DIGITS + 1] = {};
    result = sm_get(p_map, p_key, value_address_str, sizeof(value_address_str));
    if (result == 0) {
        #if defined(JSON_DEBUG)
            printf("SM get failure? %s\r\n", p_key);
        #endif
        return 0;
    }
    else
    {
        uint64_t value_address_no = (uint64_t) N(value_address_str, 0).value;
        void *p_value = 0;

        #if defined(__i386__) || defined(EMSCRIPTEN) || (!defined(_WIN64) && defined(_WIN32))
            p_value = (void*)((uint32_t) value_address_no);
            
            #if defined(JSON_DEBUG)
                printf("hashmap addr = 32 bit,  sizeof void = %d  \r\n", sizeof(void *));
            #endif
        #else
            
            p_value = (void*) value_address_no;
            #if defined(JSON_DEBUG)
                
                printf("hashmap addr = 64 bit, sizeof void = %d \r\n", sizeof(void *));
            #endif
        #endif


        return p_value;
    }
}

/////////////////////////////////////////////////////////////////
// </ End Hashmap Code: http://pokristensson.com/strmap.html>
/////////////////////////////////////////////////////////////////

void *map_get_or_make(
    struct StrMap *p_map,
    char *k_key,
    void *(*new_func)(),
    size_t len,
    void *(*init_func)(void *),
    unsigned int *obj_no
)
{
    if(!len && !init_func)
    {
        throw "No way to initalise this value.";
    }

    void *p = 0;
    size_t ret = 0;
    if((p = map_get(p_map, k_key)) == 0)
    {
        // Create the new struct.
        p = new_func();
        if(len)
        {
            memset(p, 0, len);
        }

        // Only call init func if its set.
        if(init_func)
        {
            // Call the custom init function.
            p = init_func(p);
        }

        // Don't map uninitalised values for saftey reasons.
        ret = map_put(p_map, k_key, p);

        // Not every struct has object counters.
        if(obj_no)
        {
            (*obj_no)++;
        }
    }

    return p;
}
