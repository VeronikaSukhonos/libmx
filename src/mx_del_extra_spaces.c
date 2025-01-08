#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
	char *trim = mx_strtrim(str);
	char *res = NULL;
	int symbs = 0;
	int words = 0;
	int j = 0;

	if (trim == NULL || mx_strlen(trim) < 4)
		return trim;
	for (int i = 0; trim[i] != '\0'; i++) {
		if (!mx_isspace(trim[i])) {
			symbs++;
			if (mx_isspace(trim[i + 1]) || trim[i + 1] == '\0')
				words++;
		}
	}
	symbs = symbs + words - 1;
	res = mx_strnew(symbs);
	if (res == NULL)
		return NULL;
	for (int i = 0; i < symbs; i++) {
		if (!mx_isspace(trim[j]))
			res[i] = trim[j];
		else {
			res[i] = ' ';
			while (mx_isspace(trim[j + 1])) 
				j++;
		}
		j++;
	}
	mx_strdel(&trim);
	return res;
}

