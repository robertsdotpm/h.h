// C11's bounds-checking interface.
#if defined(__STDC_LIB_EXT1__)
#define HAVE_MEMSET_S 1
#endif

// GNU C Library version 2.25 or later.
#if defined(__GLIBC__) && \
    (__GLIBC__ > 2 || (__GLIBC__ == 2 && __GLIBC_MINOR__ >= 25))
#define HAVE_EXPLICIT_BZERO 1
#endif

// Newlib
#if defined(__NEWLIB__)
#define HAVE_EXPLICIT_BZERO 1
#endif

// FreeBSD version 11.0 or later.
#if defined(__FreeBSD__) && __FreeBSD_version >= 1100037
#define HAVE_EXPLICIT_BZERO 1
#endif

// OpenBSD version 5.5 or later.
#if defined(__OpenBSD__) && OpenBSD >= 201405
#define HAVE_EXPLICIT_BZERO 1
#endif

// NetBSD version 7.2 or later.
#if defined(__NetBSD__) && __NetBSD_Version__ >= 702000000
#define HAVE_EXPLICIT_MEMSET 1
#endif

// Adapted from
// https://github.com/jedisct1/libsodium/blob/1647f0d53ae0e370378a9195477e3df0a792408f/src/libsodium/sodium/utils.c#L102-L130





// bignum256 are 256 bits stored as 8*30 bit + 1*16 bit
// val[0] are lowest 30 bits, val[8] highest 16 bits
typedef struct {
  uint32_t val[9];
} bignum256;

 void bn_addi(bignum256 *a, uint32_t b);

 void bn_add(bignum256 *a, const bignum256 *b);

 void bn_subi(bignum256 *a, uint32_t b, const bignum256 *prime);

void bn_zero(bignum256 *a);

 void bn_divmod1000(bignum256 *a, uint32_t *r);

 #define DIGITS 78  // log10(2 ^ 256)

unsigned int bn_digitcount(const bignum256 *a);

 int bn_is_zero(const bignum256 *a);

 size_t bn_format(const bignum256 *amnt, const char *prefix, const char *suffix,
                  unsigned int decimals, int exponent, bool trailing, char *out,
                  size_t outlen);

void bn_read_uint64(uint64_t in_number, bignum256 *out_number);

static inline uint32_t bn_write_uint32(const bignum256 *in_number);

 static inline uint64_t bn_write_uint64(const bignum256 *in_number);

 static inline void bn_copy(const bignum256 *a, bignum256 *b);

 static inline int bn_is_even(const bignum256 *a);

 static inline int bn_is_odd(const bignum256 *a);

 static inline size_t bn_format_uint64(uint64_t amount, const char *prefix,
                                       const char *suffix, unsigned int decimals,
                                       int exponent, bool trailing, char *out,
                                       size_t outlen);

uint32_t read_be(const uint8_t *data);

void write_be(uint8_t *data, uint32_t x);

uint32_t read_le(const uint8_t *data);

void write_le(uint8_t *data, uint32_t x);

void bn_read_be(const uint8_t *in_number, bignum256 *out_number);

void bn_write_be(const bignum256 *in_number, uint8_t *out_number);

void bn_read_le(const uint8_t *in_number, bignum256 *out_number);

void bn_write_le(const bignum256 *in_number, uint8_t *out_number);

void bn_read_uint32(uint32_t in_number, bignum256 *out_number);

int bn_bitcount(const bignum256 *a);

void bn_one(bignum256 *a);

int bn_is_less(const bignum256 *a, const bignum256 *b);

int bn_is_equal(const bignum256 *a, const bignum256 *b);

void bn_cmov(bignum256 *res, int cond, const bignum256 *truecase,
             const bignum256 *falsecase);

void bn_lshift(bignum256 *a);

void bn_rshift(bignum256 *a);

void bn_setbit(bignum256 *a, uint8_t bit);

void bn_clearbit(bignum256 *a, uint8_t bit);

uint32_t bn_testbit(bignum256 *a, uint8_t bit);

void bn_xor(bignum256 *a, const bignum256 *b, const bignum256 *c);

void bn_mult_half(bignum256 *x, const bignum256 *prime);

void bn_fast_mod(bignum256 *x, const bignum256 *prime);

void bn_mult_k(bignum256 *x, uint8_t k, const bignum256 *prime);

void bn_subtract(const bignum256 *a, const bignum256 *b, bignum256 *res);

void bn_mod(bignum256 *x, const bignum256 *prime);

void bn_multiply_long(const bignum256 *k, const bignum256 *x,
                      uint32_t res[18]);

void bn_multiply_reduce_step(uint32_t res[18], const bignum256 *prime,
                             uint32_t i);

void bn_multiply_reduce(bignum256 *x, uint32_t res[18],
                                                     const bignum256 *prime);

void bn_multiply(const bignum256 *k, bignum256 *x, const bignum256 *prime);

void bn_sqrt(bignum256 *x, const bignum256 *prime);

void bn_inverse(bignum256 *x, const bignum256 *prime);

void bn_inverse(bignum256 *x, const bignum256 *prime);

void bn_normalize(bignum256 *a);

void bn_addmod(bignum256 *a, const bignum256 *b, const bignum256 *prime);

void bn_subtractmod(const bignum256 *a, const bignum256 *b, bignum256 *res,
                    const bignum256 *prime);

void bn_divmod58(bignum256 *a, uint32_t *r);
