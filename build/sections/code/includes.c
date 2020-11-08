

void memzero(void *const pnt, const size_t len){
#ifdef _WIN32
  SecureZeroMemory(pnt, len);
#elif defined(HAVE_MEMSET_S)
  memset_s(pnt, (rsize_t)len, 0, (rsize_t)len);
#elif defined(HAVE_EXPLICIT_BZERO)
  explicit_bzero(pnt, len);
#elif defined(HAVE_EXPLICIT_MEMSET)
  explicit_memset(pnt, 0, len);
#else
  volatile unsigned char *volatile pnt_ = (volatile unsigned char *volatile)pnt;
  size_t i = (size_t)0U;

  while (i < len) {
    pnt_[i++] = 0U;
  }
#endif
}
