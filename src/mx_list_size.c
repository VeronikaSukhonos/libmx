#include "libmx.h"

int mx_list_size(t_list *list) {
	int size = 0;
	t_list *ptr = list;

	while (ptr != NULL) {
		size++;
		ptr = ptr->next;
	}
	return size;
}

