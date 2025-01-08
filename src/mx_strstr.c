#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
	int len_needle = mx_strlen(needle);
	char *ptr = NULL;

	if (len_needle == 0)
		return (char *)haystack;
	ptr = mx_memchr(haystack, needle[0], mx_strlen(haystack));
	if (ptr == NULL)
		return NULL;
	else if (mx_strncmp(ptr, needle, len_needle) == 0)
		return ptr;
	else {
		ptr++;
		return mx_strstr(ptr, needle);
	}
}

