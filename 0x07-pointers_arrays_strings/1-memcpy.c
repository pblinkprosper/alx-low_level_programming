#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: parameter for destination address
 * @src: parameter for source address
 * @n: number of bytes to be copied
 *
 * Return: return value in destination address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
