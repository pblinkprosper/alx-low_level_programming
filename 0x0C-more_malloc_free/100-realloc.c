#include "main.h"
#include <stdlib.h>
/**
 * _realloc - this function reallocates a memory block using malloc
 * @ptr: this is the pointer to a memory block previously allocated with malloc
 * @old_size: this is the size in bytes of the allocated space for ptr
 * @new_size: this is the new size of the new memory block
 *
 * Return: returns nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
