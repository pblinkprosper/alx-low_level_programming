#include "main.h"

/**
 * set_bit - this function sets the value of a bit to 1 at a given index
 * @n: the input number
 * @index: the index starting from 0
 *
 * Return: 1 if successful and -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
