#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	if (arr != NULL && size > 0 && s != NULL && count != NULL) {
		int counter = 0;
		int start = 0;
		int finish = size - 1;

		while (start <= finish) {
			int mid = (start + finish) / 2;

			counter++;
			if (mx_strcmp(s, arr[mid]) == 0) {
				*count = counter;
				return mid;
			}
			else if (mx_strcmp(s, arr[mid]) < 0)
				finish = mid - 1;
			else if (mx_strcmp(s, arr[mid]) > 0)
				start = mid + 1;
		}
	}
	return -1;
}

