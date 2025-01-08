#include "libmx.h"

int mx_atoi(const char *str) {
	int len = mx_strlen(str);
	int digits = 0;
	int sign = 1;
	long res = 0;

	for (int i = 0; i < len; i++) {
		if (mx_isdigit(str[i])) {
			digits++;
			res = res * 10 + str[i] - '0';
			if ((res > INT_MAX && sign == 1)
				|| (-res < INT_MIN && sign == -1)) {
				return -1;
			}
		}
		else if (str[i] == '+' && mx_isdigit(str[i + 1]) && digits == 0)
			sign = 1;
		else if (str[i] == '-' && mx_isdigit(str[i + 1]) && digits == 0)
			sign = -1;
		else if (!(mx_isspace(str[i]) && digits == 0))
			break;
	}
	return res * sign;
}

