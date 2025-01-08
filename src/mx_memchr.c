#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
	unsigned char *ptr = (unsigned char *)s;
	unsigned char chr = (unsigned char)c;

	for (size_t i = 0; i < n; i++) {
		if (ptr[i] == chr)
			return ptr + i;
	}
	return NULL;
}

