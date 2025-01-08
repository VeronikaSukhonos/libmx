#include "libmx.h"

void mx_pop_back(t_list **head) {
	if (head != NULL && *head != NULL) {
		if ((*head)->next == NULL) {
			free(*head);
			*head = NULL;
		}
		else {
			t_list *ptr = *head;

			while (ptr->next->next != NULL)
				ptr = ptr->next;
			free(ptr->next);
			ptr->next = NULL;
		}
	}
}

