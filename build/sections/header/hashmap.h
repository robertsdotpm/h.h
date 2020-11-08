typedef void(*sm_enum_func)(const char *key, const char *value, const void *obj);

struct Pair {
    char *key;
    char *value;
};

struct Bucket {
    unsigned int count;
    struct Pair *pairs;
};

struct StrMap {
    unsigned int count;
    struct Bucket *buckets;
};

static struct Pair * get_pair(struct Bucket *bucket, const char *key);
static unsigned long map_hash(const char *str);

struct StrMap *sm_new(unsigned int capacity);

void sm_iter(const char *key, const char *value, const void *obj);

void sm_delete(struct StrMap *map);

size_t sm_get(const struct StrMap *map, const char *key, char *out_buf, size_t n_out_buf);

int sm_exists(const struct StrMap *map, const char *key);

size_t sm_put(struct StrMap *map, const char *key, const char *value);

size_t sm_get_count(const struct StrMap *map);

int sm_enum(const struct StrMap *map, sm_enum_func enum_func, const void *obj);

static struct Pair * get_pair(struct Bucket *bucket, const char *key);

static unsigned long map_hash(const char *str);

struct StrMap *map_create(unsigned int capacity);

void map_destroy(struct StrMap *p_map);

#define MAX_MEM_ADDRESS_DIGITS 20

size_t map_put(struct StrMap *p_map, const char *p_key, void *p_value);

void *map_get(struct StrMap *p_map, const char *p_key);

void *map_get_or_make(
    struct StrMap *p_map,
    char *k_key,
    void *(*new_func)(),
    size_t len,
    void *(*init_func)(void *),
    unsigned int *obj_no
);
