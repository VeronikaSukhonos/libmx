#include "libmx.h"

int mx_sqrt(int x) {
	int ld = x % 10;

	if (x > 0 && ld != 2 && ld != 3 && ld != 7 && ld != 8) {
		for (int i = 1; i * i <= x; i++) {
			if (i * i == x)
				return i;
		}
	}
	return 0;
}

