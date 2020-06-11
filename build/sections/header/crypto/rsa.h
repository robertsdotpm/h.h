// Copyright (c) Open Enclave SDK contributors.
// Licensed under the MIT License.

#if defined(INSIDE_ENCLAVE)

#define PUBLIC_KEY_SIZE 512

class CryptoRSA
{
  private:
    mbedtls_ctr_drbg_context m_ctr_drbg_contex;
    mbedtls_entropy_context m_entropy_context;
    mbedtls_pk_context m_pk_context;
    uint8_t m_public_key[512];
    bool m_initialized;

    // Public key of another enclave.
    uint8_t m_other_enclave_pubkey[PUBLIC_KEY_SIZE];

  public:
    CryptoRSA();
    ~CryptoRSA();

    /**
     * Get this enclave's own public key
     */
    void retrieve_public_key(uint8_t pem_public_key[512]);

    /**
     * Encrypt encrypts the given data using the given public key.
     * Used to encrypt data using the public key of another enclave.
     */
    bool Encrypt(
        const uint8_t* pem_public_key,
        const uint8_t* data,
        size_t size,
        uint8_t* encrypted_data,
        size_t* encrypted_data_size);

    /**
     * decrypt decrypts the given data using current enclave's private key.
     * Used to receive encrypted data from another enclave.
     */
    bool decrypt(
        const uint8_t* encrypted_data,
        size_t encrypted_data_size,
        uint8_t* data,
        size_t* data_size);

    /**
     * get_rsa_modulus_from_pem returns the RSA modulus in big endian format
     * from the public key PEM data. This is needed to verify the MRSIGNER
     * of the other enclave, which ensures that the other enclave has been
     * signed by the right key. MRSIGNER is the SHA256 hash of the modulus
     * in little endian.
     */
    bool get_rsa_modulus_from_pem(
        const char* pem_data,
        size_t pem_size,
        uint8_t** modulus,
        size_t* modulus_size);

    // Public key of another enclave.
    uint8_t* get_the_other_enclave_public_key()
    {
        return m_other_enclave_pubkey;
    }

    /**
     * Compute the sha256 hash of given data.
     */
    int Sha256(const uint8_t* data, size_t data_size, uint8_t sha256[32]);

  private:
    /**
     * Crypto demonstrates use of mbedtls within the enclave to generate keys
     * and perform encryption. In this sample, each enclave instance generates
     * an ephemeral 2048-bit RSA key pair and shares the public key with the
     * other instance. The other enclave instance then replies with data
     * encrypted to the provided public key.
     */

    /** init_mbedtls initializes the crypto module.
     */
    bool init_mbedtls(void);

    void cleanup_mbedtls(void);
};

#endif
