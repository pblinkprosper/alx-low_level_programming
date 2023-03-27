#include "main.h"
/**
 * puts_half - prints half of the string
 * @s: parameter holding the string
 *
 * Return: nothing
 */
void puts_half(char *s)
{
	int i, k;

	i = 0;
	while (s[i] != '\0')
		i++;

	k = i / 2;
	if (i % 2 == 1)
		k++;

	while (k < i)
	{
		_putchar(s[k]);
		k++;
	}
	_putchar('\n');
}
