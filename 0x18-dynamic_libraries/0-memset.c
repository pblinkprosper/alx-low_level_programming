#include "main.h"
/**
 * _memset - a function that fills the memory with a constant byte
 * @s: pointer to the memory area
 * @b: parameter to be filled
 * @n: number of bytes to be filled
 *
 * Return: type char of the function
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
