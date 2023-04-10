#include "main.h"
/**
 * _strncat - function that concatenates two strings using n bytes from src
 * @dest: parameter for destination string
 * @src: parameter for source string
 * @n: number of bytes
 *
 * Return: returns value of dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
		;
	}
	for (j = 0; j < n && src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (j < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
