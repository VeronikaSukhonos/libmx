#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
	char *join = NULL;

	if (s1 != NULL && s2 != NULL) {	
		join = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
		if (join == NULL)
			return NULL;
		mx_strcat(join, s1);
		mx_strcat(join, s2);
	}
	else if (s1 != NULL)
		join = mx_strdup(s1);
	else if (s2 != NULL)
		join = mx_strdup(s2);
	return join;
}

