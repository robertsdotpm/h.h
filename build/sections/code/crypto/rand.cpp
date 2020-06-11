/*
 * Entropy sources:
 *    - Open enclave SDK    = Intel RDRAND instruction
 *    - Intel enclave SDK   =     ...
 *    - Web Assembly        = Virtual file system - OS /dev/random
 *    - Android             = /dev/random - sensor entropy
 *    - Samsung Knox        =     ...
 *    - Linux               =     ...
 *    - Mac OS X            =     ...
 *    - Windows             = Crypt API / BCryptGenRandom - Closed source
 *
 *
 * Optimizations:
 *    - Fetch optimal amounts of entrop, cache unused for next call.
 *    - /dev/random:
 *        - "A read(2) from /dev/random will return at most 512 bytes"
 *        - Non-blocking read calls
 *
 * References:
 *     - http://man7.org/linux/man-pages/man4/random.4.html
 *     - https://developer.android.com/reference/kotlin/java/security/SecureRandom?hl=en
 *     - https://emscripten.org/docs/api_reference/Filesystem-API.html
 *     - https://github.com/intel/linux-sgx/blob/master/common/src/sgx_read_rand.cpp
 *     - https://github.com/openenclave/openenclave/blob/master/common/sgx/rand.asm
 *
*/


// Open Enclave SDK.
#ifdef OE_API_VERSION
    
    //#include <openenclave/3rdparty/libcxx/libcxx/src/random>

    //#include <stdlib.h>
    
    signed int rand_chr()
    {
        
        
        static unsigned int buf = 0;
        static unsigned int offset = 0;
        static uint8_t *p = (uint8_t *) &buf;

        if(buf)
        {
            offset++;
            if(offset >= sizeof(unsigned int))
            {
                offset = 0;
                buf = 0;
                return rand_chr();
            }
        }
        else
        {
            //uint64_t rand_num = oe_rdrand();
            //getrandom(p, sizeof(unsigned int), (unsigned int) GRND_RANDOM);
            
            buf = random_device()() + 0;
            
            /*
            if(oe_random(p, sizeof(unsigned int)) != OE_OK)
            {
                return -1;
            }
            */
            
            return -1;
        }
        
        return p[offset];
    }

// Intel Enclave SDK.
#elif defined(SGX_SUCCESS)
    signed int rand_chr()
    {
        static uint8_t buf[10] = {};
        static unsigned int offset = 0;

        if(offset)
        {
            offset++;
            if(offset >= 9)
            {
                offset = 0;
            }
        }

        if(!offset)
        {
            if(sgx_read_rand(&(buf[1]), 8) != SGX_SUCCESS)
            {
                return -1;
            }

            offset = 1;
        }

        return buf[offset];
    }

// WebAssembly, Android, Knox, Linux + Darwin.
#elif defined (__ANDROID__) || defined (EMSCRIPTEN) || defined (__linux__) || defined (__APPLE__)
    #include <unistd.h>
    #include <fcntl.h>

    signed int rand_chr()
    {
        static unsigned int bytes_read = 0;
        static unsigned char data[513];

        // Update position in data buf.
        static int offset = 0;
        if(bytes_read)
        {
            offset++;
            if(offset >= bytes_read)
            {
                offset = 0;
            }
        }

        // Load new entropy.
        if(!offset)
        {
            int fp;
            fp = open("/dev/random", O_RDONLY);
            if(fp == 0)
            {
                return -1;
            }

            // Return what ever is available in /dev/random.
            // Code is non-blocking.
            signed int status = read(fp, &data, 512);
            if(status < 1)
            {
                close(fp);
                return -1;
            }

            bytes_read = status;
            close(fp);
        }

        return (signed int) data[offset];
    }

// Windows.
#elif defined (_WIN32) || defined (_WIN64)
    #include <bcrypt.h>
    #pragma comment(lib, "bcrypt.lib")
    #ifndef BCRYPT_STATUS_SUCCESS
        #define BCRYPT_STATUS_SUCCESS ((NTSTATUS)0x00000000L)
    #endif

signed int rand_chr()
{
    static unsigned char buf[10] = {};
    static unsigned int offset = 0;

    if (offset)
    {
        offset++;
        if (offset >= 9)
        {
            offset = 0;
        }
    }

    if (!offset)
    {
        if (BCryptGenRandom(NULL, &(buf[1]), 8,
        BCRYPT_USE_SYSTEM_PREFERRED_RNG) == BCRYPT_STATUS_SUCCESS)
        {
            offset = 1;
        }
        else
        {
            return -1;
        }
    }

    return buf[offset];
}

// No idea how to handle randomeness securely.s
#else

"Compiler error missing ;"

#endif

unsigned int rand_bytes(unsigned char *p, unsigned int no)
{
    signed int ret = 0;
    for(unsigned int i = 0; i < no; i++)
    {
        ret = rand_chr();
        if(ret < 0)
        {
            // Try 3 times to get a random byte.
            for(unsigned int j = 0; j < 3; j++)
            {
                // First sleep to gather more entropy.
                sleep_for(1000);

                // Get entropy.
                ret = rand_chr();

                // Quit as soon as the result is valid.
                if(ret != -1)
                {
                    break;
                }
            }
        }

        if(ret < 0)
        {
            return i + 1;
        }

        p[i] = (unsigned char) ret;
    }

    return no;
}

#ifndef RAND_PLATFORM_INDEPENDENT


uint32_t random32(void) {
  uint32_t buf = 0;
  unsigned int ret = rand_bytes((unsigned char *) &buf, 4);
  if(ret != 4)
  {
    throw "Unable to get entropy.";
  }

  return buf;
}

#endif /* RAND_PLATFORM_INDEPENDENT */
