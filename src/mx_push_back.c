#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
	if (list != NULL) {
		t_list *back = mx_create_node(data);

		if (back != NULL) {
			if (*list == NULL)
				*list = back;
			else {
				t_list *ptr = *list;

				while (ptr->next != NULL)
					ptr = ptr->next;
				ptr->next = back;
			}
		}
	}
}

