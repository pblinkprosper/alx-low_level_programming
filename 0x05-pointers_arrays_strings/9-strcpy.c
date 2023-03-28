#include "main.h"
/**
 * *_strcpy - copies the string
 * @dest: parameter to copy into
 * @src: paramter to copy
 *
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
