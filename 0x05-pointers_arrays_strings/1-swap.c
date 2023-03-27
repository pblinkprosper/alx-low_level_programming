#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @c: parameter to swap first integer
 * @d: parameter to swap second integer
 *
 * Return: nothing
 */
void swap_int(int *c, int *d)
{
	int a, b;

	a = *c;
	b = *d;

	*c = b;
	*d = a;
}
