#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - this function allocates memory using malloc
 * @b: parameter that checks the size of assigned memory
 *
 * Return: returns pointer to memory allocated or 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	int *jtr;

	jtr = malloc(b);
	if (jtr == NULL)
		exit(98);
	return (jtr);
}
