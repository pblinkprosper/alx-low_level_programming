#include "main.h"

/**
 * flip_bits - this function flips bits from one number to the other
 * @n: the input number to be flipped
 * @m: the number to be flipped to
 *
 * Return: the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, index;

	index = n ^ m;

	mask = 0;
	while (index > 0)
	{
		if (index & 1)
			mask++;
		index >>= 1;
	}
	return (mask);
}
