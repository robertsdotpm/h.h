#define SHA256_BLOCK_LENGTH   64

typedef struct _HMAC_SHA256_CTX {
  uint8_t o_key_pad[SHA256_BLOCK_LENGTH];
  SHA256_CTX ctx;
} HMAC_SHA256_CTX;

typedef struct _HMAC_SHA512_CTX {
  uint8_t o_key_pad[SHA512_BLOCK_LENGTH];
  SHA512_CTX ctx;
} HMAC_SHA512_CTX;

void hmac_sha256_Init(HMAC_SHA256_CTX *hctx, const uint8_t *key,
                      const uint32_t keylen);

void hmac_sha256_Update(HMAC_SHA256_CTX *hctx, const uint8_t *msg,
                                              const uint32_t msglen);

void hmac_sha256_Final(HMAC_SHA256_CTX *hctx, uint8_t *hmac);

void hmac_sha256(const uint8_t *key, const uint32_t keylen, const uint8_t *msg,
                 const uint32_t msglen, uint8_t *hmac);

void hmac_sha256_prepare(const uint8_t *key, const uint32_t keylen,
                                          uint32_t *opad_digest, uint32_t *ipad_digest);

void hmac_sha512_Init(HMAC_SHA512_CTX *hctx, const uint8_t *key,
                                                                const uint32_t keylen);

void hmac_sha512_Update(HMAC_SHA512_CTX *hctx, const uint8_t *msg, const uint32_t msglen);

void hmac_sha512_Final(HMAC_SHA512_CTX *hctx, uint8_t *hmac);

void hmac_sha512(const uint8_t *key, const uint32_t keylen, const uint8_t *msg,
                 const uint32_t msglen, uint8_t *hmac);

void hmac_sha512_prepare(const uint8_t *key, const uint32_t keylen, uint64_t *opad_digest, uint64_t *ipad_digest);

typedef struct _HMAC_DRBG_CTX {
  uint32_t odig[SHA256_DIGEST_LENGTH / sizeof(uint32_t)];
  uint32_t idig[SHA256_DIGEST_LENGTH / sizeof(uint32_t)];
  uint32_t v[SHA256_BLOCK_LENGTH / sizeof(uint32_t)];
} HMAC_DRBG_CTX;

static void update_k(HMAC_DRBG_CTX *ctx, uint8_t domain, const uint8_t *data1,
                     size_t len1, const uint8_t *data2, size_t len2);

static void update_v(HMAC_DRBG_CTX *ctx);

void hmac_drbg_reseed(HMAC_DRBG_CTX *ctx, const uint8_t *entropy, size_t len,
                      const uint8_t *addin, size_t addin_len);

void hmac_drbg_init(HMAC_DRBG_CTX *ctx, const uint8_t *entropy,
                                          size_t entropy_len, const uint8_t *nonce,
                                          size_t nonce_len);

void hmac_drbg_generate(HMAC_DRBG_CTX *ctx, uint8_t *buf, size_t len);
