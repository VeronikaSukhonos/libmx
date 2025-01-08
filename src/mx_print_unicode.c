#include "libmx.h"

void mx_print_unicode(wchar_t c) {
	char bytes[4];

	if (c >= 0 && c <= 0x7F)
		write(1, &c, 1);
	else if (c <= 0x7FF) {
		bytes[1] = 0x80 | (0x3F & c); // 10......
		bytes[0] = 0xC0 | (c >> 6); // 110.....
		write(1, bytes, 2);
	}
	else if (c <= 0xFFFF) {
		bytes[2] = 0x80 | (0x3F & c);
		bytes[1] = 0x80 | (0x3F & (c >> 6));
		bytes[0] = 0xE0 | (c >> 12); // 1110....
		write(1, bytes, 3);
	}
	else if (c <= 0x10FFFF) {
		bytes[3] = 0x80 | (0x3F & c);
		bytes[2] = 0x80 | (0x3F & (c >> 6));
		bytes[1] = 0x80 | (0x3F & (c >> 12));
		bytes[0] = 0xF0 | (c >> 18); // 11110...
		write(1, bytes, 4);
	}
}

