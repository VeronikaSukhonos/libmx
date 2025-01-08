#include "libmx.h"

void mx_pop_front(t_list **head) {
	if (head != NULL && *head != NULL) {
		t_list *tmp = *head;

		*head = tmp->next;
		free(tmp);
		tmp = NULL;
	}
}

