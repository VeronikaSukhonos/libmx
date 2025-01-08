#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long decimal = 0;

	if (hex == NULL)
		return 0;
	for (int i = 0; hex[i] != '\0'; i++) {
		if (i > 15 || !(mx_isdigit(hex[i])
			|| (hex[i] >= 'A' && hex[i] <= 'F')
			|| (hex[i] >= 'a' && hex[i] <= 'f'))) {
			return 0;
		}
	}
	for (int i = 0; hex[i] != '\0'; i++) {
		if (mx_isdigit(hex[i]))
			decimal = decimal * 16 + hex[i] - '0';
		else if (mx_isupper(hex[i]))
			decimal = decimal * 16 + hex[i] - 'A' + 10;
		else if (mx_islower(hex[i]))
			decimal = decimal * 16 + hex[i] - 'a' + 10;
	}
	return decimal;
}

