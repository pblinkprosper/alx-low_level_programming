#include "main.h"
/**
 * *string_toupper - this function converts all lowercase letter to uppercase
 * @str: parameter for the string constant
 *
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= 32;
		}
	}
	return (str);
}
