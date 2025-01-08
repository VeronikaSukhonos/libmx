#include "libmx.h"

char *mx_file_to_str(const char *file) {
	if (file != NULL) {
		int fd = open(file, O_RDONLY);
		char *str = NULL;
		char *tmp = NULL;
		char buf;
		int bytes_r;

		if (fd == -1)
			return NULL;
		bytes_r = read(fd, &buf, 1);
		while (bytes_r != 0) {
			if (bytes_r == -1)
				return NULL;
			tmp = mx_strjoin(str, &buf);
			if (tmp == NULL)
				return NULL;
			mx_strdel(&str);
			str = mx_strdup(tmp);
			if (str == NULL)
				return NULL;
			mx_strdel(&tmp);
			bytes_r = read(fd, &buf, 1);
		}
		if (close(fd) == -1)
			return NULL;
		return str;
	}
	return NULL;
}

