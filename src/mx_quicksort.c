#include "libmx.h"

int mx_quicksort(char **arr, int left, int right) {
	int swaps = 0;

	if (arr == NULL)
		return -1;
	if (left < right) {
		int mid = mx_partition(arr, left, right, &swaps);

		swaps += mx_quicksort(arr, left, mid - 1);
		swaps += mx_quicksort(arr, mid, right);
	}
	return swaps;
}

int mx_partition(char **arr, int left, int right, int *swaps) {
	char *mid = arr[(left + right) / 2];

	while (left <= right) {
		while (mx_strlen(arr[left]) < mx_strlen(mid))
			left++;
		while (mx_strlen(arr[right]) > mx_strlen(mid))
			right--;
		if (left <= right) {
			if (mx_strlen(arr[left]) != mx_strlen(arr[right])) {
				char *tmp = arr[left];

				arr[left] = arr[right];
				arr[right] = tmp;
				(*swaps)++;
			}
			left++;
			right--;
		}
	}
	return left;
}

