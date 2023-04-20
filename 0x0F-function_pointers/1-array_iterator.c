#include "function_pointers.h"
/**
 * array_iterator - this function executes a function given as a parameter
 * @array: the array to iterate through
 * @size: the size of the array
 * @action: the function given as parameter
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (!array || !action)
		return;
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
