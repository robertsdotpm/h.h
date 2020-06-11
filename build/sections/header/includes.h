#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define __STDC_WANT_LIB_EXT1__ 1

#if defined(__GNUC__) && ! defined(_GNU_SOURCE)
	#define _GNU_SOURCE /* needed for (v)asprintf, affects '#include <stdio.h>' */
#endif

// Todo: detect inclusion and only include once.
#ifdef OE_API_VERSION

#ifdef INSIDE_ENCLAVE
	// Includes for mbedtls shipped with oe.
	// Also add the following libraries to your linker command line:
	// -loeenclave -lmbedcrypto -lmbedtls -lmbedx509
	#include <mbedtls/config.h>
	#include <mbedtls/ctr_drbg.h>
	#include <mbedtls/entropy.h>
	#include <mbedtls/pk.h>
	#include <mbedtls/rsa.h>
	#include <mbedtls/sha256.h>
	
    #include <openenclave/enclave.h>
#else
    #include <openenclave/host.h>
#endif

#endif

#include <random>
#include <cstdio>
#include <cstring>
#include <stddef.h>
#include <assert.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <cstdarg>
#include <stdint.h>
#include <algorithm>
#include <climits>
#include <cstdint>
#include <limits>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <stdbool.h>
#include <setjmp.h>


#if defined(_WIN32) || defined(_WIN64)


#define F_OK 0
#include <io.h>
#include <ws2tcpip.h>
#pragma comment (lib, "Ws2_32.lib")
// Todo: detect inclusion and only include once.
#include <Windows.h>

#ifndef access
inline int access(const char *pathname, int mode) {
        return _access(pathname, mode);
    }
#endif

#endif

#ifdef __unix__
#include <unistd.h>
#include <strings.h>
#include <sys/param.h>
#endif


#ifdef __APPLE__
#include <unistd.h>
#endif

#ifdef _MSC_VER
#include <intrin.h>


static inline int __builtin_ctz(uint32_t x) {
    unsigned long ret;
    _BitScanForward(&ret, x);
    return (int)ret;
}

static inline int __builtin_ctzll(unsigned long long x) {
    unsigned long ret;
    _BitScanForward64(&ret, x);
    return (int)ret;
}

static inline int __builtin_ctzl(unsigned long x) {
    return sizeof(x) == 8 ? __builtin_ctzll(x) : __builtin_ctz((uint32_t)x);
}

static inline int __builtin_clz(uint32_t x) {
    //unsigned long ret;
    //_BitScanReverse(&ret, x);
    //return (int)(31 ^ ret);
    return (int)__lzcnt(x);
}

static inline int __builtin_clzll(unsigned long long x) {
    //unsigned long ret;
    //_BitScanReverse64(&ret, x);
    //return (int)(63 ^ ret);
    return (int)__lzcnt64(x);
}

static inline int __builtin_clzl(unsigned long x) {
    return sizeof(x) == 8 ? __builtin_clzll(x) : __builtin_clz((uint32_t)x);
}

#ifdef __cplusplus
static inline int __builtin_ctzl(unsigned long long x) {
    return __builtin_ctzll(x);
}

static inline int __builtin_clzl(unsigned long long x) {
    return __builtin_clzll(x);
}
#endif
#endif

// M is a short-hand for sizeof.
#define M sizeof

#undef memzero

void memzero(void *const pnt, const size_t len);

#if defined(OE_API_VERSION)

   typedef unsigned int wby_socket;
   typedef int wby_socket_cast;
   typedef size_t wby_size_cast;

#elif defined(_WIN64) || defined(_WIN32)

    typedef SOCKET wby_socket;
    typedef SOCKET wby_socket_cast;
    typedef int wby_size_cast;

#else

    typedef int wby_socket;
    typedef int wby_socket_cast;
    typedef int wby_size_cast;

#endif
