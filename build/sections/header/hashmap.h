typedef void(*sm_enum_func)(const char *key, const char *value, const void *obj);

struct Pair {
    char *key;
    char *value;
};

struct Bucket {
    unsigned int count;
    Pair *pairs;
};

struct StrMap {
    unsigned int count;
    Bucket *buckets;
};

static Pair * get_pair(Bucket *bucket, const char *key);
static unsigned long map_hash(const char *str);

struct StrMap *sm_new(unsigned int capacity);

void sm_iter(const char *key, const char *value, const void *obj);

void sm_delete(StrMap *map);

size_t sm_get(const StrMap *map, const char *key, char *out_buf, unsigned int n_out_buf);

int sm_exists(const StrMap *map, const char *key);

size_t sm_put(StrMap *map, const char *key, const char *value);

size_t sm_get_count(const StrMap *map);

int sm_enum(const StrMap *map, sm_enum_func enum_func, const void *obj);

static Pair * get_pair(Bucket *bucket, const char *key);

static unsigned long map_hash(const char *str);

StrMap *map_create(unsigned int capacity);

void map_destroy(StrMap *p_map);

#define MAX_MEM_ADDRESS_DIGITS 20

size_t map_put(StrMap *p_map, const char *p_key, void *p_value);

void *map_get(StrMap *p_map, const char *p_key);

void *map_get_or_make(
    struct StrMap *p_map,
    char *k_key,
    void *(*new_func)(),
    size_t len=0,
    void *(*init_func)(void *)=0,
    unsigned int *obj_no=0
);
