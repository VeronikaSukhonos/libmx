#include "libmx.h"

void mx_push_front(t_list **list, void *data) {
	if (list != NULL) {
		t_list *front = mx_create_node(data);

		if (front != NULL) {
			front->next = *list;
			*list = front;
		}
	}
}

