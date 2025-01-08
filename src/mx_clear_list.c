#include "libmx.h"

void mx_clear_list(t_list **list) {
	if (list != NULL && *list != NULL) {
		t_list *ptr = *list;

		while (ptr != NULL) {
			t_list *tmp = ptr->next;

			free(ptr);
			ptr = tmp;
		}
		*list = NULL;
	}
}

