#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - this function creates a new dog
 * @name: pointer that holds string for name
 * @age: parameter that holds data for age
 * @owner: pointer that holds string for owner
 *
 * Return: returns  to pointer of typedef variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int d;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(name) + 1);
	if (!ndog->name)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(owner) + 1);
	if (!ndog->owner)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (d = 0; name[d]; d++)
		ndog->name[d] = name[d];
	ndog->name[d] = '\0';
	ndog->age = age;
	for (d = 0; owner[d]; d++)
		ndog->owner[d] = owner[d];
	ndog->owner[d] = '\0';
	return (ndog);
}
