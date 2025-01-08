#include "libmx.h"

int mx_bubble_sort(char **arr, int size) {
	int swap_total = 0;
	int swap_count = -1;

	while (swap_count != 0) {
		swap_count = 0;
		for (int i = 0; i < size - 1; i++) {
			if (mx_strcmp(arr[i], arr[i + 1]) > 0) {
				char *tmp = arr[i + 1];

				arr[i + 1] = arr[i];
				arr[i] = tmp;
				swap_count++;
				swap_total++;
			}
		}
	}
	return swap_total;
}

