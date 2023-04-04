#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of two diagonals in a square
 * @a: parameter to check the string
 * @size: size of the string
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int c, d, e, sum1, sum2;

	sum1 = sum2 = 0;
	c = 0;
	d = size - 1;
	for (e = 0; e < size; e++)
	{
		sum1 += *(a + e * size + c);
		sum2 += *(a + e * size + d);
		c += 1;
		d -= 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
