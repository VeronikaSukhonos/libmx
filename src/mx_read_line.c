#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
	if (buf_size > 0) {
		static char *remember = NULL;
		char *buf = mx_strnew(buf_size);
		int bytes_rd = 0;
		int bytes_wr = 0;

		if (buf == NULL)
			return -2;
		bytes_rd = read(fd, buf, buf_size);
		if (bytes_rd == -1) { // invalid fd
			mx_strdel(&buf);
			return -2;
		}
		if (bytes_rd == 0) { // empty file
			mx_strdel(&buf);
			return -1;
		}
		*lineptr = NULL;
		if (remember != NULL) {
			*lineptr = mx_strdup(remember);
			bytes_wr += mx_strlen(remember);
			mx_strdel(&remember);
		}
		while (bytes_rd != 0) {
			int index = mx_get_char_index(buf, delim);
			char *tmp = *lineptr;

			if (index >= 0) {
				char *dup = mx_strndup(buf, index);

				*lineptr = mx_strjoin(tmp, dup);
				if ((size_t)index < buf_size - 1
					&& (size_t)bytes_rd == buf_size) {
					remember = mx_strdup(buf + index + 1);
				}
				mx_strdel(&tmp);
				mx_strdel(&dup);
				mx_strdel(&buf);
				return bytes_wr + index;
			}
			*lineptr = mx_strjoin(tmp, buf);
			bytes_wr += bytes_rd;
			mx_strdel(&tmp);
			bytes_rd = read(fd, buf, buf_size);
		}
		mx_strdel(&buf);
		mx_strdel(&remember);
		return bytes_wr;		
	}
	return -2;
}

