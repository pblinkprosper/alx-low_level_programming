#include "main.h"
/**
 * _strchr - function to locate char in string
 * @s: pointer to string
 * @c: character to be located
 *
 * Return: return the pointer to the char
 */
char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b]; b++)
	{
		if (s[b] == c)
		{
			return (char *)&s[b];
		}
	}
	return (0);
}
