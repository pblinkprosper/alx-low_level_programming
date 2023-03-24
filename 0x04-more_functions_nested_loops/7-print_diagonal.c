#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: this is the size of the diagonal
 *
 * Return: There is no error
 **/

void print_diagonal(int n)
{
	int repeat, count;

	for (repeat = 1; n > 0 && repeat <= n; repeat++)
	{
		for (count = 1; count <= repeat; count++)
		{
			if (count == repeat)
			{
				_putchar(92);
			}
			else
			{
				_putchar(32);
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
