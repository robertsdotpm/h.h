

enum e_trade_action {BUY = 0, SELL = 1};

struct t_currency {
    struct t_number no;
    unsigned char code[10];
    struct t_number usd_ppc;
};

struct t_ppc {
    struct t_currency have;
    // struct t_currency usd;
};

struct t_trade {
    //unsigned int action;
    struct t_currency have;
    struct t_currency want;
    //struct t_currency total;
};

enum e_attestation_type {INTEL_ATTEST = 0, SAMSUNG_ATTEST = 1};

/*
//                                PKI------->   ...
// Samsung -> Root pub -> Attest. Root pub -> Container pub -> Input.
*
*  Intel -> Root pub -> Attest
*
*/

enum e_auth_type {
    CERT_PEM = 0,
    ECDSA_SECP256K1 = 1
};

struct t_auth {
    unsigned int type;
    unsigned char id[500];
    unsigned char id_hex[1001];
};

struct t_attestation {
    unsigned int type;

    // Contains root pub and root sig
    // signed by Samsung.
    unsigned char hex_blob[2000];

    // Deserialised root pub from the TEE
    // for easier validation.
    struct t_auth root_pub;
};

// From a TEE (Trusted Execution Environment.)
struct t_tee_proof {
    struct t_auth auth;
    unsigned char sig[100];
};

// Unspent input event.
struct t_deposit {
    struct t_currency currency;
    unsigned char pub_key[70];
    struct t_tee_proof tee_proof;
};

// Offer event.
struct t_offer {
    struct t_trade trade;
    struct t_attestation attestation;
    struct t_tee_proof tee_proof;
    unsigned int round;
    unsigned char hash[65];
};

struct t_match_info {
    unsigned int no;
    struct t_linked_info list;
    struct t_number sent_total;
};

// Show an overview for a currency account.
struct t_summary {
    //unsigned int no;
    struct t_number total;
    struct t_linked_info statements;
};

// Point to a summary based on currency name.
struct t_portfolio {
    unsigned int no;

    StrMap *by_currency;
};

// Point to a list of asset holdings based on account.
struct t_balances {
    //unsigned int no;

    struct t_portfolio available;
    struct t_portfolio matching;
    struct t_portfolio matched;
    struct t_portfolio converting;
};

struct t_account {
    struct t_portfolio credits;
    struct t_portfolio debits;
    struct t_balances balances;
};

struct t_state {
    uint8_t master_signer_pub[33];

    // First 32 bytes of seed = signer priv key.
    // Next 32 bytes = encryption priv key.
    uint8_t *p_master_seed;

    StrMap *accounts;

    unsigned int active_offers;
    struct t_offer offers[OFFERS_CAPACITY];

    unsigned int active_matches;

    // Doubly linked list of t_match.
    StrMap *matches;

    //map<char *, struct t_pending_matches> pending_matches;
};

void init_state(struct t_state *p_state);

enum e_round_type { ROUND_DOWN = 0, ROUND_UP = 1 };

void *init_empty(void *p);

void *new_summary();
