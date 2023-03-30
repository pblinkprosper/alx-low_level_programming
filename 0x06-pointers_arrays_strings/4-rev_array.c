#include "main.h"
/**
 * reverse_array - function that reverses an array
 * @a: first parameter for reversal
 * @b: second parameter for reversal
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int c, d, temp;

	for (c = n - 1, d = 0; c >= 0; c--, d++)
	{
		if (d <c)
		{
			temp = a[d];
			a[d] = a[c];
			a[c] = temp;
		}
	}
}
