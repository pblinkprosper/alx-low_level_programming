#include "main.h"
#include <stdlib.h>
/**
 * _strdup - this function returns a pointer to a newly allocated space in
 * memory, which is a duplicate of the given string
 * @str: this is the string to be duplicated
 *
 * Return: it returns a pointer to the new string or NULL is str is NULL
 */
char *_strdup(char *str)
{
	char *nstr;
	int c, d;

	if (str == NULL)
		return (NULL);
	c = 0;
	for (; str[c]; c++)
		;
	nstr = malloc(sizeof(char) * (c + 1));

	if (nstr == NULL)
		return (NULL);

	for (d = 0; d < c; d++)
		nstr[d] = str[d];

	return (nstr);
}
