// CONFIG:
/////////////
//////////////////////////
/////////////////////////////////////////////

// Turn on enhanced error checking and logging
// at the expense of performance.
const unsigned int DEBUG_MODE = 1;

const unsigned int OFFERS_CAPACITY = 100;
const unsigned int MATCH_CAPACITY = 100;

// Alternatively just set to "."
const char WWW_ROOT_PATH[] = "";



#define MAX_WSCONN 8

#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define WBY_STATIC
#define WBY_IMPLEMENTATION
#define WBY_USE_FIXED_TYPES
#define WBY_USE_ASSERT

#define WBY_REQ_BUF_SIZE 2048


// use precomputed Curve Points (some scalar multiples of curve base point G)
#ifndef USE_PRECOMPUTED_CP
#define USE_PRECOMPUTED_CP 1
#endif

// use fast inverse method
#ifndef USE_INVERSE_FAST
#define USE_INVERSE_FAST 1
#endif

// support for printing bignum256 structures via printf
#ifndef USE_BN_PRINT
#define USE_BN_PRINT 0
#endif

// use deterministic signatures
#ifndef USE_RFC6979
#define USE_RFC6979 1
#endif

// add way how to mark confidential data
#ifndef CONFIDENTIAL
#define CONFIDENTIAL
#endif

#define HTTP_IMPLEMENTATION

//////////////////////////////////////////////
/////// Don't touch bellow this point. ///////
//////////////////////////////////////////////
