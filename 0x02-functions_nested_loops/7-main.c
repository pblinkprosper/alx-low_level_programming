#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int d;

	print_last_digit(98);
	print_last_digit(0);
	d = print_last_digit(-1024);
	_putchar('0' + d);
	_putchar('\n');
	return (0);
}
