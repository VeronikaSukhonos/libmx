#include "libmx.h"

void mx_printint(int n) {
	long num = n;

	if (num < 0) {
		mx_printchar('-');
		num = -num;
	}

	if (num / 10 == 0) {
		mx_printchar(num % 10 + '0');
		return;
	}
	else {
		mx_printint(num / 10);
		mx_printchar(num % 10 + '0');
	}
}

