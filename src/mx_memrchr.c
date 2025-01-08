#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
	unsigned char *ptr = (unsigned char *)s;
	unsigned char chr = (unsigned char)c;

	for (size_t i = n; i > 0; i--) {
		if (ptr[i - 1] == chr)
			return ptr + i - 1;
	}
	return NULL;
}

