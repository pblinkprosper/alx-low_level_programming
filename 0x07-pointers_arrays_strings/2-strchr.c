#include "main.h"
#include <stddef.h>
/**
 * _strchr - function to locate char in string
 * @s: pointer to string
 * @c: character to be located
 *
 * Return: return the pointer to the char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i] == 0)
		{
			return (NULL);
		}
	}
	return (NULL);
}
