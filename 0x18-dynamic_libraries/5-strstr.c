#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a first occurence of substring
 * needle in the string needle in the string haystack
 * @haystack: main string to be examined
 * @needle: substring to be searched for in haystack
 *
 * Return: a pointer to the first character found in hatstack else
 * return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int f, g;

	for (f = 0; haystack[f]; f++)
	{
		for (g = 0; needle[g]; g++)
		{
			if (haystack[f + g] != needle[g])
				break;
		}
		if (!needle[g])
			return (haystack + f);
	}
	return (NULL);
}
