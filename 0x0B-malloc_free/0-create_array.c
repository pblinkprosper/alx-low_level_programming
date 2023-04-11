#include "main.h"
#include <stdlib.h>
/**
 * create_array - this function creates an array of type char
 * @size: this is the size of the array created
 * @c: this is the character used to determine the array initialization
 *
 * Return: this function returns a char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;

	s = malloc(size * sizeof(char));
	for (n = 0; n < size; n++)
	s[n] = c;
	return (s);
}
