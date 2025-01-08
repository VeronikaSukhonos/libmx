#include "libmx.h"

double mx_pow(double n, unsigned int pow) {
	double res = (pow == 0) ? 1 : n;

	for (unsigned int i = 1; i < pow; i++)
		res *= n;
	return res;
}

