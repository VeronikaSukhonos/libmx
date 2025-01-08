#include "libmx.h"

int mx_strncmp(const char *s1, const char *s2, int n) {
	int len1 = mx_strlen(s1);

	for (int i = 0; i < n && i < len1 + 1; i++) {
		if (s1[i] != s2[i])
			return s1[i] - s2[i];
	}
	return 0;
}

