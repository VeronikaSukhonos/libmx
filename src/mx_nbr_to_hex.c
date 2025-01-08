#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
	unsigned long tmp = nbr;
	char *hex = NULL;
	int size;

	for (size = (nbr == 0) ? 1 : 0; tmp != 0; size++)
		tmp /= 16;
	hex = mx_strnew(size);
	if (hex == NULL)
		return NULL;
	if (nbr == 0)
		hex[0] = '0';
	for (int i = size - 1; nbr != 0; i--) {
		int symb = nbr % 16;

		hex[i] = (symb < 10) ? (symb + '0') : (symb - 10 + 'a');
		nbr /= 16;
	}
	return hex;
}

