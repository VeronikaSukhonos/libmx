#include "libmx.h"

char *mx_strnew(const int size) {
	if (size >= 0) {
		char *new = malloc(size + 1);

		if (new == NULL)
			return NULL;
		for (int i = 0; i < size + 1; i++)
			new[i] = '\0';
		return new;
	}
	return NULL;
}

