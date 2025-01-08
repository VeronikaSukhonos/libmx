#include "libmx.h"

char *mx_strcpy(char *dst, const char *src) {
	return mx_memcpy(dst, src, mx_strlen(src) + 1);
}

