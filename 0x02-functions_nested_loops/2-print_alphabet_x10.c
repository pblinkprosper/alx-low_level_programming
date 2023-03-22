#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints the alphabet 10 times
 *
 * Return: always 0 success
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		n++;
		_putchar('\n');
	}
}
