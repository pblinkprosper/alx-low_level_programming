#include "main.h"

/**
 * get_bit - this function gets the value of a bit at a given index
 * @n: the input number
 * @index: the index starting from 0
 *
 * Return: the value of the bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) != 0);
}
