#include "main.h"
#include <stdlib.h>
/**
 * _calloc - this function allocates memory for an array
 * @nmemb: this is the number of elements to be allocated
 * @size: this is the size of the elements
 *
 * Return: returns a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = (nmemb * size);
	ptr = malloc(j);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ptr[i] = 0;
	return (ptr);
}
