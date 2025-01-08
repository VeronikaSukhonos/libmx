#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
	int len1 = mx_strlen(s1);
	int i;

	for (i = 0; s2[i] != '\0'; i++)
		s1[len1 + i] = s2[i];
	s1[len1 + i] = '\0';
	return s1;
}

