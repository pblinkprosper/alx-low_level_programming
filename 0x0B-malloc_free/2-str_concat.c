#include "main.h"
#include <stdlib.h>
/**
 * str_concat - this function concatenates two strings
 * @s1: this is the first string
 * @s2: this is the second string
 *
 * Return: returns pointer to new memory of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int f, g;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (f = 0; s1[f]; f++)
		;
	for (g = 0; s2[g]; g++)
		;
	s3 = malloc(sizeof(char) * ((f + g) + 1));

	if (s3 == NULL)
		return (NULL);
	for (f = 0; s1[f]; f++)
	{
		s3[f] = s1[f];
	}
	for (g = 0; s2[g]; g++)
	{
		s3[f] = s2[g];
		f++;
	}
	return (s3);
}
