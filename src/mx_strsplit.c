#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
	if (s != NULL) {
		int words = mx_count_words(s, c);
		char **arr = malloc(sizeof(char *) * (words + 1));
		char *ptr = NULL;
		int wordnum = -1;
		int len = 0;

		if (arr == NULL)
			return NULL;
		for (int i = 0; s[i] != '\0'; i++) {
			if (s[i] != c && len == 0) {
				wordnum++;
				ptr = (char *)(s + i);
			}
			if (s[i] != c) {
				len++;
				if (s[i + 1] == c || s[i + 1] == '\0') {
					arr[wordnum] = mx_strnew(sizeof(char) * len);
					if (arr[wordnum] == NULL)
						return NULL;
					mx_strncpy(arr[wordnum], ptr, len);
					len = 0;
				}
			}
		}
		arr[words] = NULL;
		return arr;
	}
	return NULL;
}

