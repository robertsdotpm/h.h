bool set_json_offsets(char **json_str, size_t *size);

uint8_t *sign_json_payload(char *json_str, size_t size, uint8_t *priv_key);

bool valid_json_sig(char *json_str, size_t size, StrMap* p_json);

int calc_challenge_hash(uint8_t *nonce_buf, uint8_t *pub_key_buf, uint8_t *challenge_hash);

#if defined(INSIDE_ENCLAVE)

uint8_t *pem_pub_to_mr_signer(uint8_t *pub_pem_buf, size_t pub_pem_len, uint8_t *mr_signer_out);

#endif

bool verify_api_message(char *msg_buf, size_t msg_len, uint8_t* pub_pem_buf=0, size_t pub_pem_len=0);
    
char *api_message(
    const char *call,
    char *params_buf, size_t params_len,
    uint8_t *secp256k1_priv_b32, 
    unsigned int demo=0,
    uint8_t *target_info_buf=0, size_t target_info_size=0,
    const char *reply_mode="long_poll");
    
