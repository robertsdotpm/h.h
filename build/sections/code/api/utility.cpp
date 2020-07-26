/*
    API message format.

    {
        "call": "...",
        "params": {},
        "reply_mode": "long_poll",
        "nonce": "large rand no",
        "enclave_report": "attest [nonce] + [pub]... hex",
        "auth": {
            "pub": "... hex",
            "demo": 1
        }
    } client_pub_sig


    {
        "payload": "... above encoded somehow?",
        "nonce": "large rand no"
        ... bloom filters?
    } switch_board_sig

- enclave report is ~4595 bytes

*/


bool set_json_offsets(char **json_str, size_t *size)
{
    // Find first {
    char *json_start = 0;
    size_t start_offset = 0;
    for(; start_offset < *size; start_offset++)
    {
        if((*json_str)[start_offset] == '{')
        {
            json_start = &((*json_str)[start_offset]);
            break;
        }
    }

    if(!json_start)
    {
        return false;
    }

    // Find last }
    char *json_end = 0;
    size_t new_size = 0;
    for(size_t i = *size - 1; i; i--)
    {
        if((*json_str)[i] == '}')
        {
            json_end = &((*json_str)[i]);
            new_size = (i + 1) - (start_offset + 1);
            break;
        }
    }

    // Didn't find.
    if(!json_end)
    {
        return false;
    }

    // Update pointers.
    *size = new_size;
    *json_str = json_start;

    return true;
}

// include rand nonce
uint8_t *sign_json_payload(char *json_str, size_t size, uint8_t *priv_key)
{
    // Sha256 hash JSON message.
    uint8_t digest[32 + 1] = {};
    sha256(digest, (unsigned char *) json_str, size);
    ////printf("json msg digest = \r\n");
    //hex_print(digest, 32);

    ////printf("Priv key = \r\n");
    //hex_print(priv_key, 32);

    // Sign json.
    uint8_t sig_bytes[64 + 1] = {};
    uint8_t pby = 0;
    if(ecdsa_sign_digest(&secp256k1, priv_key, &digest[0], &sig_bytes[0], &pby, 0) != 0)
    {
        return 0;
    }

    // Alloc space for sig hex.
    uint8_t *sig_hex = (uint8_t *) calloc(128 + 1, 1);
    if(!sig_hex)
    {
        return 0;
    }

    // Convert sig bytes to hex.
    if(!bytes_to_hex(&sig_bytes[0], 64, &sig_hex[0], 129))
    {
        return 0;
    }

    return sig_hex;
}

bool valid_json_sig(char *json_str, size_t size, StrMap* p_json)
{
    // Get sig offsets.
    size_t sig_len = 0;
    size_t sig_end_offset = 0;
    char *sig = 0;
    for(size_t i = size - 1; i; i--)
    {
        if(!is_whitespace(json_str[i]))
        {
            sig_end_offset = i;
            break;
        }
    }

    for (size_t i = sig_end_offset; i; i--)
    {
        if(is_whitespace(json_str[i]) || json_str[i] == '}')
        {
            if(i + 1 < size)
            {
                sig = &json_str[i + 1];
                sig_len = 128;
                break;
            }
        }
    }

    if(!sig)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("sig not found.");
        #endif
        return 0;
    }

    json_str[size] = '\0';

    ////printf("api validate sig size = %d \r\n", size);
    ////printf("api msg sig hex %s \r\n", sig);
    ////printf("api msg sig len %d \r\n", strlen(sig));
    ////printf("api msg sig len pointer math %d \r\n", sig_len);
    ////printf("api sig = '%s' \r\n", sig);


    // Convert sig hex to bytes.
    uint8_t sig_bytes[64 + 1] = {};
    if(!hexstr_to_bytes(sig, sig_len, sig_bytes, 65))
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("failed to convert sig to bytes.");
        #endif
        return 0;
    }


    //printf("size provided %d \r\n", size);
    //printf("hash len bytes %d \r\n", size - 128);

    // Hash json.
    uint8_t digest[32 + 1] = {};
    sha256(digest, (unsigned char *) json_str, size - 128);
    // ^ appears to hash the sig too.

    //printf("after sha hash \r\n.");



    //printf("before pub get \r\n.");

    // Pull pub key from json..
    uint8_t pub_key[33 + 1] = {};
    char json_key[] = "[auth][pub]";
    void *json_result = map_get(p_json, (const char *) &json_key[0]);
    if(!json_result)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("failed to get auth pub.");
        #endif
        return 0;
    }

        //printf("after pub get \r\n.");


    struct t_json_expr* json_expr = (struct t_json_expr*) json_result;
    if(json_expr->type != JSON_str)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("expr not str in auth pub.");
        #endif
        return 0;
    }

    //printf("before pub to bytes \r\n.");

    // Convert pub key to bytes.
    if(!hexstr_to_bytes(
            (char *) &json_expr->p_str[0],
            strlen((char *) &json_expr->p_str[0]),
            pub_key, 34))
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("cant convert hex str to bytes. \r\n");
        #endif
        return 0;
    }

    // Convert sig to bytes.
    if(!hexstr_to_bytes(sig, sig_len, sig_bytes, 65))
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("cant convert sig to bytes.");
        #endif
        return 0;
    }

    //printf("before ecdsa verify digest \r\n.");

    hex_print(digest, 32);

    // Validate sig against hash and pub key.
    int status = ecdsa_verify_digest(&secp256k1, &pub_key[0], &sig_bytes[0], &digest[0]);
    if(!status)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("sig verify digest success.");
        #endif
        return 1;
    }
    else
    {
        //printf("failed ecdsa verify !!! %d \r\n", status);
        return 0;
    }

}

// 32 byte c str, 33 byte c str, 32 byte output buf.
int calc_challenge_hash(uint8_t *nonce_buf, uint8_t *pub_key_buf, uint8_t *challenge_hash)
{
    uint8_t challenge_buf[32 + 33 + 1] = {};
    size_t challenge_buf_size = 32 + 33 + 1;

    memcpy(challenge_buf, nonce_buf, 32);
    memcpy(&challenge_buf[32], pub_key_buf, 33);

    sha256(challenge_hash, challenge_buf, challenge_buf_size - 1);
    return 0;
}

#if defined(INSIDE_ENCLAVE)

    uint8_t *pem_pub_to_mr_signer(uint8_t *pub_pem_buf, size_t pub_pem_len, uint8_t *mr_signer_out)
    {
        uint8_t* modulus = NULL;
        size_t modulus_size = 0;
        bool success = false;

        // Mbed tls.
        CryptoRSA *p_cryptoRSA = new CryptoRSA();
        if (p_cryptoRSA == NULL)
        {
            goto pem_to_mr_cleanup;
        }

        // Extract modulus from raw PEM.
        if (!p_cryptoRSA->get_rsa_modulus_from_pem(
                (char *) pub_pem_buf,
                pub_pem_len,
                &modulus,
                &modulus_size))
        {
            goto pem_to_mr_cleanup;
        }

        // Reverse the modulus and compute sha256 on it.
        for (size_t i = 0; i < modulus_size / 2; i++)
        {
            uint8_t tmp = modulus[i];
            modulus[i] = modulus[modulus_size - 1 - i];
            modulus[modulus_size - 1 - i] = tmp;
        }

        // Calculate the MRSIGNER value which is the SHA256 hash of the
        // little endian representation of the public key modulus. This value
        // is populated by the signer_id sub-field of a parsed oe_report_t's
        // identity field.
        if (p_cryptoRSA->Sha256(modulus, modulus_size, mr_signer_out) != 0)
        {
            goto pem_to_mr_cleanup;
        }

        success = true;
        pem_to_mr_cleanup:
            if(p_cryptoRSA)
            {
                delete p_cryptoRSA;
            }

            if(modulus)
            {
                free(modulus);
            }

        if(success)
        {
            return mr_signer_out;
        }

        return 0;
    }

#endif

// "params": {},
// ^ json heap corruption?
// Todo: signing needs to be done with bytes not hashes!
bool verify_api_message(char *msg_buf, size_t msg_len, uint8_t* pub_pem_buf, size_t pub_pem_len)
{
    if(msg_buf)
    {
        //printf("msg buf is tru \r\n");
        //printf("%d provided len is \r\n", msg_len);
        //printf("msg buf[0] is %c \r\n", msg_buf[0]);
    }

    bool msg_is_valid = false;
    bool valid_user_pub_sig = false;
    char *json_str = 0;
    StrMap *p_json_map = 0;
    uint8_t *p_report = 0;
    char *nonce_hex = 0;
    char *pub_key_hex = 0;
    char *report_hex = 0;
    uint8_t nonce_buf[32 + 1] = {};
    uint8_t pub_key_buf[33 + 1] = {};
    uint8_t challenge_hash[32 + 1] = {};
    uint8_t our_mrsigner[32 + 1] = {};
    size_t report_hex_len = 0;
    size_t report_size = 0;

    #if defined(INSIDE_ENCLAVE)
        oe_report_t parsed_report = {0};
        oe_result_t result = OE_OK;
    #endif

    // Allocate clean message buffer for json parser
    // so that json func doesn't touch input str.
    json_str = (char *) calloc((msg_len + 1), sizeof(char));
    if(json_str == NULL)
    {
        goto cleanup_api_verify;
    }
    memcpy(json_str, msg_buf, msg_len - 128);


    //printf("str len json str = %d \r\n", strlen((char *) json_str));

    // Assigned mapped json key value pairs to hashmap.
    p_json_map = json_decode(json_str, strlen((char *) json_str));
    if(!p_json_map)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("Json decode returned 0. \r\n");
        #endif

        goto cleanup_api_verify;
    }

    //printf("verify msg len = %d \r\n\r\n", msg_len);
    //printf("%s", msg_buf);

    // Check provided ECDSA sig matches pub key inside msg.
    valid_user_pub_sig = valid_json_sig(msg_buf, msg_len, p_json_map);
    if(!valid_user_pub_sig)
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("Json sig not valid. \r\n");
        #endif

        goto cleanup_api_verify;
    }
    else
    {
        #if defined(DEBUG_API_VERIFY)
            //printf("Json sig valid ! \r\n");
        #endif
    }


    // Validate enclave report.
    #if defined(INSIDE_ENCLAVE)
        // Get nonce.
        nonce_hex = get_json_str(p_json_map, "[nonce]", 64);
        if(!nonce_hex)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("nonce not found. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        // Convert nonce hex back to bytes.
        if(hexstr_to_bytes(nonce_hex, 64, nonce_buf, 33) != 32)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("nonce to bytes failed. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        // Get their pub key hex.
        pub_key_hex = get_json_str(p_json_map, "[auth][pub]", 66);
        if(!pub_key_hex)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("pub key not found. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        // Convert their pub key back to bytes.
        if(hexstr_to_bytes(pub_key_hex, 66, pub_key_buf, 34) != 33)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("pub hex to bytes failed. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        // Generate challenge value passed to enclave report.
        assert(sizeof(nonce_buf) >= 32);
        assert(sizeof(pub_key_buf) == 34);
        if(calc_challenge_hash((uint8_t *) nonce_buf, (uint8_t *) pub_key_buf, challenge_hash))
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("cannot calc challenge hash. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        // Get report.
        report_hex = get_json_str(p_json_map, "[enclave_report]");
        if(!report_hex)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("enclave report not found. \r\n");
            #endif

            goto cleanup_api_verify;
        }
        else
        {
            report_hex_len = strlen(report_hex);
            if(!report_hex_len)
            {
                #if defined(DEBUG_API_VERIFY)
                    //printf("report len blank. \r\n");
                #endif

                goto cleanup_api_verify;
            }

            if(report_hex_len % 2)
            {
                #if defined(DEBUG_API_VERIFY)
                    //printf("odd report hex len. \r\n");
                #endif

                goto cleanup_api_verify;
            }
        }

        //printf("GOT REPORT HEX = '%s' \r\n", report_hex);
        //printf("report hex len = '%d' \r\n", report_hex_len);

        // Convert report back to bytes.
        report_size = report_hex_len / 2;
        p_report = (uint8_t *) calloc(report_size + 1, sizeof(uint8_t) );
        if(p_report == NULL)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("convert alloc p report bytes. \r\n");
            #endif

            goto cleanup_api_verify;
        }

        if(!hexstr_to_bytes(report_hex, report_hex_len, (unsigned char *) p_report, report_size + 1))
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("convert report hex to bytes. \r\n");
            #endif

            goto cleanup_api_verify;
        }


        // While attesting, the report being attested must not be tampered
        // with. Ensure that it has been copied over to the enclave.
        if (!oe_is_within_enclave(p_report, report_size))
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("not within enclave. \r\n");
            #endif
            TRACE_ENCLAVE("Cannot attest report in host memory. Unsafe. \r\n");

            goto cleanup_api_verify;
        }

        TRACE_ENCLAVE("report_size = %ld \r\n", report_size);
        if(p_report)
        {
            //printf("p report is true \r\n");
        }

        // Parse received report.
        result = oe_verify_report(p_report, report_size, &parsed_report);
        if (result != OE_OK)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("oe verify report failed. \r\n");
            #endif
            TRACE_ENCLAVE("oe_verify_report failed (%s).\n", oe_result_str(result));

            goto cleanup_api_verify;
        }
        else
        {
            //printf("REPORT VALIDATED !!!!! \a \r\n");
        }

        //printf("enclave pem pub here = '%s'", pub_pem_buf);

        // Convert our public key pem to mr signer.
        if(!pem_pub_to_mr_signer(pub_pem_buf, pub_pem_len, &our_mrsigner[0]))
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("cannot get mr signer. \r\n");
            #endif
            goto cleanup_api_verify;
        }

        // 2) validate the enclave identity's signed_id is the hash of the public
        // signing key that was used to sign an enclave. Check that the enclave was
        // signed by an trusted entity.
        if (memcmp(parsed_report.identity.signer_id, our_mrsigner, 32) != 0)
        {
            hex_print(parsed_report.identity.signer_id, 32);
            //printf("\r\n\r\n");
            hex_print(our_mrsigner, 32);

            #if defined(DEBUG_API_VERIFY)
                //printf("signer id is wrong. \r\n");
            #endif
            TRACE_ENCLAVE("identity.signer_id checking failed. \r\n");

            goto cleanup_api_verify;
        }

        // Validate report data challenge hash.
        if (memcmp(parsed_report.report_data, challenge_hash, 32) != 0)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("report data challenge hash is wrong. \r\n");
            #endif
            TRACE_ENCLAVE("SHA256 mismatch.");

            goto cleanup_api_verify;
        }
    #endif

    msg_is_valid = true;
    cleanup_api_verify:
        if(p_json_map)
        {
            map_destroy(p_json_map);
        }

        if(json_str)
        {
            free(json_str);
        }

        if(p_report)
        {
            free(p_report);
        }

    return msg_is_valid;
}

// Todo: lets move the report part to its own api call for pub key challenge
// Todo: add verify
// response format?
// seperate bellow into reusable funcs more.
char *api_message(
    const char *call,
    char *params_buf, size_t params_len,
    uint8_t *secp256k1_priv_b32,
    unsigned int demo,
    uint8_t *target_info_buf, size_t target_info_size,
    const char *reply_mode)
{
    uint8_t *api_msg_buf = 0;
    uint8_t secp256k1_pub_key[33 + 1] = {};
    uint8_t pub_key_hex[66 + 1] = {};
    uint8_t nonce[32 + 1] = {};
    uint8_t nonce_hex[64 + 1] = {};
    uint8_t challenge_hash[32 + 1] = {};
    size_t report_size = 0;
    uint8_t *p_report_buf = NULL;
    uint8_t *p_report_hex = NULL;
    uint8_t *hex_sig = NULL;
    size_t api_msg_len = 0;
    size_t api_msg_size = 0;

    // Layout of what an API message looks like.
    const char api_msg_format[] = 
    "{"
    "    \"call\": \"%s\","
    "    \"params\": \"%s\","
    "    \"reply_mode\": \"%s\","
    "    \"nonce\": \"%s\","
    "    \"enclave_report\": \"%s\","
    "    \"auth\": {"
    "        \"pub\": \"%s\","
    "        \"demo\": \"%d\""
    "    }"
    "}";

    #if defined(INSIDE_ENCLAVE)
        // Set enclave report type.
        #if defined(USE_LOCAL_REPORT)
            const uint32_t oe_report_flags = 0;
            //printf("get local report \r\n \a");

        #else
            const uint32_t oe_report_flags = OE_REPORT_FLAGS_REMOTE_ATTESTATION;
        #endif

        oe_result_t get_report_ret;
        size_t report_hex_size = 0;
    #endif

    // Get ECDSA pub key.
    ecdsa_get_public_key33(&secp256k1, &secp256k1_priv_b32[0], &secp256k1_pub_key[0]);
    if(!bytes_to_hex(&secp256k1_pub_key[0], 33, pub_key_hex, 67))
    {
        goto cleanup_api_msg;
    }

    //printf("last pub value %d \r\n", (int) secp256k1_pub_key[32]);

    // Get message nonce.
    rand_bytes((unsigned char *) &nonce, 32);
    if(!bytes_to_hex(&nonce[0], 32, nonce_hex, 65))
    {
        goto cleanup_api_msg;
    }

    // Generate challenge buf
    // Enclave attest report signs this if it's defined.
    assert(sizeof(nonce) >= 32);
    assert(sizeof(secp256k1_pub_key) == 34);
    if(calc_challenge_hash(nonce, secp256k1_pub_key, challenge_hash))
    {
        goto cleanup_api_msg;
    }

    // Calculate enclave report.
    #if defined(INSIDE_ENCLAVE)
        // Get enclave report.
        get_report_ret = oe_get_report(
            oe_report_flags,
            challenge_hash, // Store sha256 in report_data field
            32,
            target_info_buf, // opt_params must be null
            target_info_size,
            &p_report_buf,
            &report_size);
        if (get_report_ret != OE_OK)
        {
            //printf("oe_get_report failed. \r\n");
            goto cleanup_api_msg;
        }

        //printf("GOT REPORT SIZE %d \r\n", report_size);

        // Allocate space to store report as hex.
        report_hex_size = (report_size * 2) + 1;
        p_report_hex = (uint8_t *) calloc(
            report_hex_size,
            sizeof(uint8_t)
        );
        if(p_report_hex == NULL)
        {
            #if defined(DEBUG_API_VERIFY)
                //printf("cannot alloc bytes for report hex \r\n");
            #endif

            goto cleanup_api_msg;
        }

        // Store remote report buf as hex.
        if(!bytes_to_hex(
                p_report_buf, report_size,
                p_report_hex, report_hex_size))
        {
            //printf("cant turn report to hex \r\n");
            goto cleanup_api_msg;
        }

        //printf("aa \r\n");
    #else
        //printf("skipping p report gen \r\n");
        p_report_hex = (uint8_t *) calloc(2, 1);
        p_report_hex[0] = '0';
    #endif

    // Calculate storage space requirements.
    api_msg_size = (
        strlen(api_msg_format) +
        strlen(call) +
        params_len +
        strlen(reply_mode) +
        64 + // Nonce (in hex).
        strlen((char *) p_report_hex) + // report
        66 + // Pub key (in hex)
        sizeof(unsigned int) + // Demo or production.
        1 + // white space
        128 + // Sig (in hex)
        1 + // null.
        10 // Space for null and extra.
    );

    // Allocate storage space.
    api_msg_buf = (uint8_t *) calloc(api_msg_size, sizeof(uint8_t));

    // Write fields to buf.
    /*
    s_sprintf(
        (char *) api_msg_buf, api_msg_size,
        api_msg_format, api_msg_size - 11,
            call,
            params_buf,
            reply_mode,
            nonce_hex,
            p_report_hex,
            pub_key_hex,
            demo
    );
    */


    snprintf(
        (char *) api_msg_buf, api_msg_size - 10,
        api_msg_format,
            call,
            params_buf,
            reply_mode,
            nonce_hex,
            p_report_hex,
            pub_key_hex,
            demo
    );


    // Sign json.
    api_msg_len = strlen((char *) api_msg_buf);
    hex_sig = sign_json_payload(
        (char *) api_msg_buf, api_msg_len, secp256k1_priv_b32);

    //printf("API msg len = %d \r\n", api_msg_len);

    // Write sig to end of message.
    assert(api_msg_len < api_msg_size);
    assert(api_msg_len + 128 < api_msg_size);
    memcpy(&api_msg_buf[api_msg_len], &hex_sig[0], 128);
    api_msg_buf[api_msg_len + 128] = '\0';

    // Cleanup temp memory.
    cleanup_api_msg:
        #if defined(INSIDE_ENCLAVE)
            if(p_report_buf)
            {
                oe_free_report(p_report_buf);
            }
        #endif

        if(p_report_hex)
        {
            free(p_report_hex);
        }

        if(hex_sig)
        {
            free(hex_sig);
        }

    // Return final signed message with any attached enclave reports.
    return (char *) api_msg_buf;
}
