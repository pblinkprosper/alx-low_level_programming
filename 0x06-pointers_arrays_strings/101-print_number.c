#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: parameter for integer
 *
 * Return: always 0
 */
void print_number(int n)
{
	unsigned int i, j, k;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	k = 1;

	while (j > 9)
	{
		j /= 10;
		k *= 10;
	}

	for (; k >= 1; k /= 10)
	{
		_putchar(((i / k) % 10) + 48);
	}
}
