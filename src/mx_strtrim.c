#include "libmx.h"

char *mx_strtrim(const char *str) {
	int start = -1;
	int finish = 0;

	if (str == NULL)
		return NULL;
	for (int i = 0; str[i] != '\0'; i++) {
		if (!mx_isspace(str[i])) {
			finish = i;
			if (start == -1)
				start = i;
		}
	}
	if (start == -1)
		return mx_strnew(0);
	return mx_strndup(str + start, finish - start + 1);
}

