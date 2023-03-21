#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 success
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
