#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @ch: string parameter to be printed
 *
 * Return: nothing
 */
void _puts(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
}
