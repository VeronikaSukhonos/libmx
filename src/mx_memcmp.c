#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
	unsigned char *ptr1 = (unsigned char *)s1;
	unsigned char *ptr2 = (unsigned char *)s2;

	for (size_t i = 0; i < n; i++) {
		if (ptr1[i] != ptr2[i])
			return ptr1[i] - ptr2[i];
	}
	return 0;
}

