#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	size_t len1 = mx_strlen(s1);
	size_t len_dup = (len1 < n) ? len1 : n;
	char *dup = mx_strnew(len_dup);

	if (dup == NULL)
		return NULL;
	return mx_strncpy(dup, s1, len_dup);
}

