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
	for (; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == 0)
		{
			return (NULL);
		}
	}
	return (NULL);
}
