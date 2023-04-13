#include "main.h"
#include <stdlib.h>
/**
 * string_noncat - this function concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of bytes to be allocated in memory for concatenation
 *
 * Return: returns pointer to new allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (j < n)
		j = n;
	s3 = malloc((i + n) + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	return (s3);
}
