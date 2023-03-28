#include <stdio.h>
#include "main.h"
/**
 * print_array - this fuction prints n elements of the array
 * @a: parameter for the array
 * @n: length of the array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
