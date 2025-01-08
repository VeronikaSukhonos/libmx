#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
	if (lst != NULL && cmp != NULL) {
		int size = mx_list_size(lst);
		int swap_count = -1;

		while (swap_count != 0) {
			t_list *ptr = lst;
			t_list *prev = NULL;

			swap_count = 0;
			for (int i = 0; i < size - 1; i++) {
				t_list *a = ptr;
				t_list *b = ptr->next;

				if ((*cmp)(a->data, b->data)) {
					t_list *tmp = b->next;

					b->next = a;
					a->next = tmp;
					if (prev == NULL)
						lst = b;
					else
						prev->next = b;
					prev = b;
					swap_count++;
				}
				else {
					ptr = b;
					prev = a;
				}
			}
		}
		return lst;	
	}
	return NULL;
}

