#include "main.h"
/**
 * print_number - print integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int n2, n1 = n;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n1 = n * -1;
	}
	n2 = n1;
	while (n2 > 9)
	{
		div *= 10;
		n2 = n2 / 10;
	}
	while (div >= 1)
	{
		n2 = n1 % div;
		n1 /= div;
		_putchar(n1 + '0');
		n1 = n2;
		div /= 10;
	}
}
