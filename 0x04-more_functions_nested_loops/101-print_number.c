#include "main.h"
/**
 * print_number - print integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int x;

	a = n;
	if (n < 0)
	{
		_putchar(45);
		a = -n;
	}
	if (a / 10)
		print_number(a / 10);
		_putchar((a % 10) + '0');
}
