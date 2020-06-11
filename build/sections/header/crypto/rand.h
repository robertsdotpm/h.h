#include <random>

signed int rand_chr();

unsigned int rand_bytes(unsigned char *p, unsigned int no);

#ifndef RAND_PLATFORM_INDEPENDENT

uint32_t random32(void);

#endif
