#include "main.h"
#include <stdlib.h>
/**
 * array_range - this function creates an array of integers
 * @min: parameter for minimum values
 * @max: parameter for maximum values
 *
 * Return: returns a pointer to the new array
 */
int *array_range(int min, int max)
{
	int i, k;
	int *ary;

	if (min > max)
		return (NULL);
	k = max - min;
	ary = malloc(sizeof(int *) * (k + 1));
	if (ary == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
		ary[i] = min + i;
	return (ary);
}
