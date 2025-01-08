#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
	void *new = NULL;
	size_t old_size = malloc_usable_size(ptr);
	size_t cpy_size = (old_size < size) ? old_size : size;

	if (ptr == NULL)
		return malloc(size);
	if (size == 0) {
		free(ptr);
		return NULL;
	}
	new = malloc(size);
	if (new == NULL)
		return NULL;
	mx_memcpy(new, ptr, cpy_size);
	free(ptr);
	return new;
}

