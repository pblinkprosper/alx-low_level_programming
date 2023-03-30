#include "main.h"
/**
 * cap_string - function that capitalises all words of a string
 * @str: parameter for storing the string to be used
 *
 * Return: returns char
 */
char *cap_string(char *str)
{
	int i, j, k;

	char syms[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
	'(', ')', '{', '}'};

	j = 32;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - j;
		}
		j = 0;
		for (k = 0; syms[k]; k++)
		{
			if (syms[k] == str[i])
			{
				j = 32;
				break;
			}
		}
	}
	return (str);
}
