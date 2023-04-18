#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - this function frees memory used by the dog function
 * @d: pointer holding string for typedef struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
