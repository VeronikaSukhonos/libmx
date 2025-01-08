#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
	if (arr != NULL && delim != NULL) {
		for (int i = 0; arr[i] != NULL; i++) {
			if (i != 0)
				mx_printstr(delim);
			mx_printstr(arr[i]);
		}
		write(1, "\n", 1);
	}
}

