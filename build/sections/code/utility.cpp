#ifndef _MSC_VER
size_t strnlen_s(const char *s, size_t maxsize)
{
    if (s == NULL) {
        return 0;
    }

    size_t count = 0;
    while (*s++ && maxsize--) {
        count++;
    }

    return count;
}
#endif

#ifndef _MSC_VER
size_t strncpy_s(char *dest, size_t dest_size, const char *src, size_t src_count)
{
    if(!dest)
    {
        return 0;
    }

    if(!src)
    {
        return 0;
    }

    if(src_count + 1 >= dest_size)
    {
        return 0;
    }

    char *p = (char *) &src[0];
    size_t offset = 0;
    for(; (offset < src_count) && *p; offset++)
    {
        dest[offset] = *p;
		if(offset + 1 < src_count)
		{
			p++;
		}
    }

    dest[offset] = '\0';

    return offset + 1;
}
#endif

// Safe str compare with null stopping and bound stopping.
int strncmp_s(const char *dest, size_t dest_size, const char *src, size_t src_size, size_t count)
{
	if(!dest)
	{
		return -1;
	}

	if(!src)
	{
		return -2;
	}

	// Buffer overflow.
	if(count > dest_size)
	{
		return -3;
	}

	// Buffer overflow.
	if(count > src_size)
	{
		return -4;
	}

	// Do cmp -- stopping at null.
	char *p = (char *) &dest[0];
	for(size_t i = 0; i < count; i++)
	{
		// NULL terminator found in source.
		// CMP stops here for safety reasons.
		if(!src[i])
		{
			return (int) (i + 1);
		}

		// Same check as above but for dest.
		if(!dest[i])
		{
			return (int)(i + 1);
		}

		// Compare chars.
		if(*p != src[i])
		{
			return (int)(i + 1);
		}

		// Point to next char but not outside the buff.
		if(i + 1 < count)
		{
			p++;
		}
	}

	return 0;
}

// sprintf safe
// that sprintf alloc function?



// Add up all vargs for the size part.
int s_sprintf(char * const dest, size_t dest_size, const char *format, size_t varg_total_size, ...)
{
	if(!dest)
	{
		return -1;
	}

	if(!format)
	{
		return -2;
	}

	if(varg_total_size > (dest_size - 1))
	{
		return -4;
	}

	memset(dest, 0, dest_size);
	va_list ap;
	va_start(ap, varg_total_size);

	size_t format_len = strlen(format);
	size_t bytes_written = 0;
	size_t format_bytes_written = 0;
	bool skip = false;
    int ret = 0;
	for(size_t i = 0; i < format_len; i++)
	{
		skip = false;
		#ifdef DEBUG_SPRINTF
			printf("%c\r\n", format[i]);
		#endif
		if(format[i] == '%')
		{
			//char char_to_print = va_arg(ap, int);
			#ifdef DEBUG_SPRINTF
				printf("in format\r\n");
			#endif


			// Len 3 format specifiers.
			if(i + 3 <= format_len)
			{
				if(!skip && (!strncmp_s(&format[i + 1], format_len - (i + 1), "lli", 3, 3) ||
				   !strncmp_s(&format[i + 1], format_len - (i + 1), "lld", 3, 3))
				)
				{
					long long lli = va_arg(ap, long long);
					if(bytes_written + sizeof(long long) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%lli", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -6;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "llu", 3, 3))
				{
					unsigned long long lli = va_arg(ap, unsigned long long);
					if(bytes_written + sizeof(unsigned long long) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%llu", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -7;
					}
				}

				// Skip processed specifier.
				if(skip)
				{
					i += 3;
					continue;
				}
			}

			// Len 2 format specifiers.
			if(i + 2 <= format_len)
			{
				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "hi", 2, 2))
				{
					short lli = (short) va_arg(ap, int);
					if(bytes_written + sizeof(short) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%hi", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -8;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "hu", 2, 2))
				{
					unsigned short lli = (unsigned short) va_arg(ap, unsigned int);
					if(bytes_written + sizeof(unsigned short) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%hu", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -9;
					}
				}

				if(!skip && (!strncmp_s(&format[i + 1], format_len - (i + 1), "ld", 2, 2) ||
				   !strncmp_s(&format[i + 1], format_len - (i + 1), "li", 2, 2))
				)
				{
					long lli = va_arg(ap, long);
					if(bytes_written + sizeof(long) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%li", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -10;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "lf", 2, 2))
				{
					double lli = va_arg(ap, double);
					if(bytes_written + sizeof(double) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%lf", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -11;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "Lf", 2, 2))
				{
					long double lli = va_arg(ap, long double);
					if(bytes_written + sizeof(long double) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%Lf", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -12;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "lu", 2, 2))
				{
					unsigned long lli = va_arg(ap, unsigned long);
					if(bytes_written + sizeof(unsigned long) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%lu", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -13;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "%%", 2, 2))
				{
					if(bytes_written + 1 < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%%");
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -14;
					}
				}

				// Skip processed specifier.
				if(skip)
				{
					i += 2;
				}
			}


			// Len 1 format specifiers.
			if(i + 1 <= format_len)
			{

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "c", 1, 1))
				{
					char lli = (char) va_arg(ap, int);
					if(bytes_written + sizeof(char) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%c", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -14;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "f", 1, 1))
				{
					float lli = (float) va_arg(ap, double);
					if(bytes_written + sizeof(float) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%f", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -16;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "g", 1, 1))
				{
					double lli = va_arg(ap, double);
					if(bytes_written + sizeof(double) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size, "%g", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -17;
					}
				}

				#ifdef DEBUG_SPRINTF
					if(skip)
					{
						printf("skip already set\r\n");
					}
				#endif

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "s", 1, 1))
				{
					#ifdef DEBUG_SPRINTF
						printf("in s\r\n");
					#endif
					if(i + 2 <= format_len)
					{
						#ifdef DEBUG_SPRINTF
							printf("writing s\r\n");
						#endif

						char *src = (char *) va_arg(ap, char *);
						size_t s_len = strnlen_s(&src[0], varg_total_size - (bytes_written - format_bytes_written));
						s_len = s_len > 0 ? s_len : 0;

						#ifdef DEBUG_SPRINTF
							printf("S len = %d\r\n", s_len);
						#endif

						if(bytes_written + s_len < dest_size && s_len)
						{
							snprintf(&dest[bytes_written], dest_size - bytes_written, "%s", &src[0]);
							bytes_written += s_len;
							skip = true;
						}
						else
						{
							return -18;
						}
					}
					else
					{
						return -19;
					}
				}

				if(!skip && ( !strncmp_s(&format[i + 1], format_len - (i + 1), "u", 1, 1)  ||
                              !strncmp_s(&format[i + 1], format_len - (i + 1), "d", 1, 1)
                             )
                )
				{
					unsigned int lli = va_arg(ap, unsigned int);
					if(bytes_written + sizeof(unsigned int) < dest_size)
					{
						ret = snprintf(&dest[bytes_written], dest_size - bytes_written, "%d", lli);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -20;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "p", 1, 1))
				{
					// Copy address of void pointer into a buf.
					// Get the length.
					// Write it into dest buffer.
					void *lli = va_arg(ap, void *);
					const size_t max_address_buf_size = 128;
					char p_address[max_address_buf_size] = { 0 };
					snprintf(&p_address[0], max_address_buf_size, "%p", lli);
					size_t p_address_len = strnlen_s(&p_address[0], max_address_buf_size);
					p_address_len = p_address_len > 0 ? p_address_len : 0;

					// Write address to dest buffer.
					if(bytes_written + p_address_len < dest_size && p_address_len)
					{
						p_address[p_address_len - 1] = '\0';
						snprintf(&dest[bytes_written], dest_size, "%s", p_address);
						bytes_written += p_address_len;
						skip = true;
					}
					else
					{
						return -21;
					}
				}

				if(!skip && !strncmp_s(&format[i + 1], format_len - (i + 1), "x", 1, 1))
				{
					// Copy address of void pointer into a buf.
					// Get the length.
					// Write it into dest buffer.
					unsigned long lli = va_arg(ap, unsigned long);
					const size_t max_long_buf_size = 200;
					char p_long[max_long_buf_size] = { 0 };
					snprintf(&p_long[0], max_long_buf_size, "%lu", lli);
					size_t p_long_len = strnlen_s(&p_long[0], max_long_buf_size);
					p_long_len = p_long_len > 0 ? p_long_len : 0;

					// Write address to dest buffer.
					if(bytes_written + p_long_len < dest_size && p_long_len)
					{
						p_long[p_long_len - 1] = '\0';
						ret = snprintf(&dest[bytes_written], dest_size, "%s", p_long);
                        if(ret > 0)
                        {
						 	bytes_written += (unsigned) ret;
                        }
						skip = true;
					}
					else
					{
						return -22;
					}
				}

				// Skip processed specifier.
				if(skip)
				{
					i += 1;
				}
			}

		// Write next obj to buf.
		}
		else
		{
			if(bytes_written + sizeof(char) < dest_size)
			{
				dest[bytes_written] = format[i];
				bytes_written++;
				format_bytes_written++;
			}
			else
			{
				return -5;
			}
		}

		#ifdef DEBUG_SPRINTF
			if(skip)
			{
				printf("skip set\r\n");
			}
		#endif
	}


	va_end(ap);
	dest[bytes_written] = '\0';
	return (int) bytes_written;
}

size_t hexstr_to_bytes(const char* hexstr, size_t len, unsigned char *out, size_t out_size)
{
    // Odd length hex = ambiguous.
    if (len % 2)
    {
        return 0;
    }

    // New len is half current len, since 2 bytes in hex per bytes.
    size_t final_len = len / 2;
    if(out_size <= final_len || final_len < 1)
    {
        if(DEBUG_MODE)
        {
            printf("overflow in hex to bytes.");
        }
        return 0;
    }


    // Convert hex to bytes using weird character code math
    // = no ugly hard coded hex alphabet arrays.
    for (unsigned int i = 0, j = 0; j < final_len; i += 2, j++)
    {
        out[j] = (unsigned char) ((hexstr[i] % 32 + 9) % 25 * 16 +
            (hexstr[i + 1] % 32 + 9) % 25);
    }

    // Null terminate it.
    out[final_len] = '\0';

    return final_len;
}


size_t bytes_to_hex(unsigned char *b_str, size_t b_str_len, unsigned char *out, size_t out_len)
{
    // Buffer overflow.
    if(out_len <= b_str_len * 2)
    {
        if(DEBUG_MODE)
        {
            printf("overflow in bytes to hex.");
        }
        return 0;
    }


    if(DEBUG_MODE)
    {
        if(out[0] != '\0')
        {
            throw "Bytes to hex called TWICE on same buffer";
		}
	}

    for(size_t i = 0; i < b_str_len; i++)
    {
        snprintf((char *) &out[i * 2], out_len - (i * 2), "%02X", b_str[i]);
	}

    out[b_str_len * 2] = '\0';
    return b_str_len * 2;
}

void hex_print(uint8_t *buf, size_t size)
{
    size_t hex_str_len = (size * 2);
    uint8_t *hex_str_buf = (uint8_t *) calloc(hex_str_len + 1, sizeof(uint8_t));
    if(hex_str_buf)
    {
        if(bytes_to_hex(buf, size, (unsigned char *) hex_str_buf, hex_str_len + 1))
        {
            printf("%s\r\n", (char *) hex_str_buf);
        }

        free(hex_str_buf);
    }
}

bool A(unsigned char *c_str, unsigned int do_throw)
{
    bool is_safe = true;
    while(*c_str != '\0')
    {
        if(
            !isalnum(*c_str) &&
            !isspace(*c_str) &&
            !ispunct(*c_str)
		)
        {
            is_safe = false;
            break;
		}

        c_str++;
	}

    if(do_throw && !is_safe)
    {
        throw "C string is not safe";
	}

    return is_safe;
}

void reverse(char s[])
{
    size_t i, j;
    char c;

    for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
	}
}

/* itoa:  convert n to characters in s */
void itoa(uint128_t n, char s[])
{
    // Todo: buf len arg then assert > digit span
    unsigned int i;
    //sign;

    /*
		if ((sign = n) < 0)  // record sign
        n = -n;
	*/
	/* make n positive */
    i = 0;
    do {       /* generate digits in reverse order */
        s[i++] = (  (char) ( (unsigned int) ( n % 10) )  ) + '0';   /* get next digit */
	} while ((n /= 10) > 0);     /* delete it */

    //if (sign < 0)
    //    s[i++] = '-';

    s[i] = '\0';
    reverse(s);
}

int print_uint128_t(uint128_t u128, uint128_t precision)
{
    size_t prec = (size_t) precision;
	char buf[30];
	memset(buf, 0, sizeof(buf));
	itoa(u128, buf);

    if(!precision)
    {
	   printf("%s", &buf[0]);
    }
    else
    {
        if(strlen(buf) >= prec)
        {
            // Split string at end of whole portion.
            size_t dec_offset = strlen(buf) - prec;
            char tmp = buf[dec_offset];
            buf[dec_offset] = '\0';
            char *whole_buf = &buf[0];

            // Create dec buf.
            char dec_buf[30];
            memset(dec_buf, 0, sizeof(dec_buf));
            dec_buf[0] = tmp;
            memcpy(&dec_buf[1], &buf[dec_offset + 1], strlen((const char *) &buf[dec_offset + 1]));

            // Show result.
            printf("%s.%s", whole_buf, &dec_buf[0]);
        }
        else
        {
            printf("%s", &buf[0]);
        }
    }

	return 0;
}

void assert_uint128_t(uint128_t left, uint128_t right)
{
	if (left != right)
	{
		printf("Assert failed [left, right]: \r\n");
		print_uint128_t(left);
		printf("\r\n");
		print_uint128_t(right);
		assert(0);
	}
}

// Zero C string
unsigned char * Z(unsigned char *c_str, size_t from_size_of)
{
    c_str[from_size_of - 1] = '\0';

    return c_str;
}

void PN(t_number no)
{
    print_uint128_t(no.value, no.precision);
    printf("\r\n");
}

void delete_t_number(void *p)
{
    auto p_no = (struct t_number *) p;
    delete p_no;
}

void terminate_uid(void *uid, size_t buf_len)
{
    // Initalise uid key, making sure its terminated.
    size_t offset = strnlen((char *) uid, buf_len - 1);
    ((char *) uid) [offset] = 0;
}

bool is_whitespace(char ch)
{
	if(ch == ' ')
	{
		return true;
	}

	if(ch == '\r')
	{
		return true;
	}

	if(ch == '\n')
	{
		return true;
	}

	if(ch == '\t')
	{
		return true;
	}

	return false;
}

void trim_ws(char* s) {
	char* p = s;
	size_t l = strlen(p);
	if (l == UINTMAX_MAX)
	{
		l--;
	}

	while (isspace(p[l - 1])) p[--l] = 0;
	while (*p && isspace(*p)) ++p, --l;

	memmove(s, p, l + 1);
}

/*
	* vscprintf:
	* MSVC implements this as _vscprintf, thus we just 'symlink' it here
	* GNU-C-compatible compilers do not implement this, thus we implement it here
*/
#ifdef __GNUC__
	int vscprintf(const char *format, va_list ap)
	{
		va_list ap_copy;
		va_copy(ap_copy, ap);
		int retval = vsnprintf(NULL, 0, format, ap_copy);
		va_end(ap_copy);
		return retval;
	}
#endif

/*
	* asprintf, vasprintf:
	* MSVC does not implement these, thus we implement them here
	* GNU-C-compatible compilers implement these with the same names, thus we
	* don't have to do anything
*/
#ifdef _MSC_VER
	int vasprintf(char **strp, const char *format, va_list ap)
	{
		int len = vscprintf(format, ap);
		if (len == -1)
        return -1;
		char *str = (char*)malloc((size_t) len + 1);
		if (!str)
        return -1;
		int retval = vsnprintf(str, ((size_t) len) + 1, format, ap);
		if (retval == -1) {
			free(str);
			return -1;
		}
		*strp = str;
		return retval;
	}

	int asprintf(char **strp, const char *format, ...)
	{
		va_list ap;
		va_start(ap, format);
		int retval = vasprintf(strp, format, ap);
		va_end(ap);
		return retval;
	}
#endif

void sleep_for(long ms)
{
#if defined(__APPLE__)
	usleep(ms * 1000);
#elif defined(_WIN32)
	Sleep((DWORD) ms);
#else
	time_t sec = (int)(ms / 1000);
	const long t = ms - (sec * 1000);
	struct timespec req;
	req.tv_sec = sec;
	req.tv_nsec = t * 1000000L;
	while (-1 == nanosleep(&req, &req));
#endif
}

void test_log(const char* text)
{
	printf("[debug] %s\n", text);
}

char *file_get_contents(const char *file_path) {
	char *file_data = 0;
	size_t file_len = 0;
	size_t bytes_read = 0;
	FILE *fp = fopen(file_path, "rb");

	if (fp) {
		// Get file size on disk and reset read pointer.
		fseek(fp, 0, SEEK_END);
		file_len = (size_t) ftell(fp);
		fseek(fp, 0, SEEK_SET);

		// Prevent overflow.
		if (file_len == UINT_MAX)
		{
			fclose(fp);
			return 0;
		}

		// Alloc space for file.
		if (file_len > 0) {
			file_data = (char *) malloc(file_len + 1);

			// Read file to buffer.
			if (file_data) {
                                file_data[file_len] = '\0';
				bytes_read = fread(file_data, 1, file_len, fp);
				if (bytes_read != file_len) {
					if (file_data) {
						free(file_data);
						file_data = 0;
					}
				}
			}
		}

		fclose(fp);
	}

	return file_data;
}

// Used for parsing requests to access a local file from the web server.
// Designed to prevent local file inclusions and other horrible exploits.
bool is_lfi(char *buf, size_t size)
{
	const char *safe_chars = { "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890/_\\:" };
	size_t safe_chars_len = strlen(safe_chars);
	bool seen_dot = false;
	bool is_safe = false;
	for(size_t i = 0; i < size; i++)
	{
		// Break on NULL;
		if(!buf[i])
		{
			break;
		}

		// Special case for successive dots = go back a directory.
		if(buf[i] == '.')
		{
			if(seen_dot)
			{
				return true;
			}

			seen_dot = true;
			continue;
		}
		else
		{
			seen_dot = false;
		}

		// Check char is safe.
		is_safe = false;
		for(size_t j = 0; j < safe_chars_len; j++)
		{
			if(buf[i] == safe_chars[j])
			{
				is_safe = true;
				break;
			}
		}

		// Not safe.
		if(!is_safe)
		{
			return true;
		}
	}

	return false;
}

unsigned int s_gets( char *str, size_t n )
{
  char *str_end, *fgets_return = 0;
  int temp = 0;

  if(n >= INT_MAX)
  {
    return 1;
  }

  if(!str)
  {
      return 2;
  }

  fgets_return = fgets( str, (int) n, stdin );

  /* If fgets fails, it returns NULL.
  This includes the case where stdin is exhausted. */
  if ( fgets_return == NULL )
  {
    str[0] = '\0';
    return 3;
  }

  // Success.
  str_end = &str[strlen(str) - 1];
  if ( *str_end == '\n' )
  {
    *str_end = '\0';
    return 0;
  }

  // Buffer was over-run.
  *str_end = '\0';

  // Flush whatever is left in input stream.
  do temp = fgetc( stdin );
  while ( temp != EOF && temp != '\n' );

  return 4;
}

bool re_match(const char *p_cstr_pattern, char *p_cstr_haystack)
{
    const char *p_error;
    bool is_match = false;
    Reprog *p_reprog = 0;
    Resub sub_match = {};

    // Allocate re pattern prog.
    p_reprog = regcomp(p_cstr_pattern, 0, &p_error);
    if(!p_reprog)
    {
        return false;
    }

    // Run pattern.
    if(regexec(p_reprog, (const char *) p_cstr_haystack, &sub_match, 0))
    {
        goto re_match_cleanup;
    }

    // Success.
    is_match = true;

    // Cleanup.
    re_match_cleanup:
        if(p_reprog)
        {
            regfree(p_reprog);
        }

    return is_match;
}

bool is_hex(char *p_cstr)
{
    // If it's not evenly divisible by 2 its bugged.
    size_t cstr_len = strlen(p_cstr);
    if(cstr_len % 2)
    {
        return false;
    }

    return re_match("^[0-9a-fA-F]+$", p_cstr);
}

char *url_get_contents(const char *url)
{
    http_t *request = http_get( url, NULL );
    if(request != NULL)
    {
        // Download content to buffer.
        http_status_t status = HTTP_STATUS_PENDING;
        int prev_size = -1;
        while( status == HTTP_STATUS_PENDING )
        {
            status = http_process( request );
            if( prev_size != (int) request->response_size )
            {
                //printf( "%d byte(s) received.\n", (int) request->response_size );
                prev_size = (int) request->response_size;
            }
        }

        // Display buffer.
        if( status == HTTP_STATUS_FAILED )
        {
            //printf( "HTTP request failed (%d): %s.\n", request->status_code, request->reason_phrase );
            return NULL;
        }
        else
        {
            //printf("HTTP got content -- see bellow for how to access it\r\n");
            //printf( "\nContent type: %s\n\n%s\n", request->content_type, (char const*)request->response_data );

            // Copy req data to new buf
            // This is done so the http struct can be released and only the data can be returned. 
            const char *req_data = (const char *) request->response_data;
            size_t data_size = strlen(req_data);
            char *buf = (char *) malloc(data_size + 1);
            memcpy(buf, req_data, data_size);
            buf[data_size] = '\0';

            // Release HTTP struct and return content.
            http_release( request );
            return buf;
        }

        // Release buffer.
        http_release( request );
    }

    return NULL;
}
