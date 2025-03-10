#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
	unsigned char *d = (unsigned char *)dst;
	unsigned char *s = (unsigned char *)src;
	unsigned char stop = (unsigned char)c;

	for (size_t i = 0; i < n; i++) {
		d[i] = s[i];
		if (s[i] == stop)
			return d + i + 1;
	}
	return NULL;
}

