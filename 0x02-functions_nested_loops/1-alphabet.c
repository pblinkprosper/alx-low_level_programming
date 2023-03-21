#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: this function prints the alphabets
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
