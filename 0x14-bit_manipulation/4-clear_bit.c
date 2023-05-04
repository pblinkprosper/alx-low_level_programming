#include "main.h"

/**
 * clear_bit - this function sets the value of a bit to 0 at a given index
 * @n: the input number
 * @index: the index starting from 0
 *
 * Return: 1 if successful and -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned long int bits;

	bits = (sizeof(unsigned long int) * 8);
	if (index > bits)
		return (-1);

	i = 1;
	i = ~(i << index);
	*n = (*n & i);

	return (1);
}
