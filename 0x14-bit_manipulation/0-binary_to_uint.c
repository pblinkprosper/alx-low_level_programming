#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to an unsigned int
 * @b: the binary number to be converted
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (*b == 0)
		return (0);
	i = 0;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i <<= 1;
		i += (*b++ - '0');
	}
	return (i);
}
