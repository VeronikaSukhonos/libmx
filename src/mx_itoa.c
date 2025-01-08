#include "libmx.h"

char *mx_itoa(int number) {
	long num = number;
	char *str = NULL;
	int size;

	for (size = (num > 0) ? 0 : 1; number != 0; size++)
		number /= 10;
	str = mx_strnew(size);
	if (str == NULL)
		return NULL;
	if (num < 0) {
		num = -num;
		str[0] = '-';
	}
	else if (num == 0)
		str[0] = '0';
	for (int i = size - 1; num != 0; i--) {
		str[i] = num % 10 + '0';
		num /= 10;
	}
	return str;
}

