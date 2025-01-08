#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
	unsigned char *haystack = (unsigned char *)big;
	unsigned char *needle = (unsigned char *)little;
	unsigned char *ptr = NULL;

	if (little_len == 0)
		return (void *)big;
	ptr = mx_memchr(haystack, needle[0], big_len);
	if (ptr == NULL || big_len < little_len)
		return NULL;
	else if (mx_memcmp(ptr, needle, little_len) == 0)
		return ptr;
	else {
		ptr++;
		return mx_memmem(ptr, big_len - (ptr - haystack), needle, little_len);
	}
}

