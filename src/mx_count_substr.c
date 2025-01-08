#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
	char *ptr = NULL;
	int count;

	if (str == NULL || sub == NULL)
		return -1;
	if (mx_strlen(sub) == 0)
		return 0;

	ptr = mx_strstr(str, sub);
	for (count = 0; ptr != NULL; count++) {
		ptr++;
		ptr = mx_strstr(ptr, sub);
	}
	return count;
}

