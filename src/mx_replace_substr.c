#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
	if (str != NULL && sub != NULL && replace != NULL) {
		int index = mx_get_substr_index(str, sub);
		int len_sub = mx_strlen(sub);
		int len_rep = mx_strlen(replace);
		char *new = NULL;
		int j = 0;

		if (index == -1 || len_sub == 0)
			return mx_strdup(str);
		new = mx_strnew(mx_strlen(str) - len_sub + len_rep);
		if (new == NULL)
			return NULL;
		for (int i = 0; str[i] != '\0'; i++) {
			if (i == index) {
				mx_strncpy(new + j, replace, len_rep);
				i += len_sub - 1;
				j += len_rep - 1;
				index = mx_get_substr_index((str + i), sub);
				if (index != -1)
					index += i;
			}
			else
				new[j] = str[i];
			j++;
		}
		return new;
	}
	return NULL;
}

