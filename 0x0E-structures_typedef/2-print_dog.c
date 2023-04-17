#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - this function prints the struct dog
 * @d: pointer to array of struct members
 *
 * Return: returns nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Name: %s\n", d->owner);
	printf("Name: %f\n", d->age);
}
