#include "main.h"
/**
 * print_last_digit - prints the last digit of a integer
 * @l: parameter for printing last digit
 * Return: always 0 (success)
 */
int print_last_digit(int l)
{
	int d;

	if (l < 0)
	{
		n = -n;
	}
	d = l % 10;
	if (d < 0)
	{
		d = -d;
	}
	_putchar(d + '0');
	return (0);
}
