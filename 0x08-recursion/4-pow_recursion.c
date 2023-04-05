#include "main.h"
/**
 * _pow_recursion - this function prints the value of a number raised
 * the power of another number
 * @x: number to be raised
 * @y: number that is the power of number being raised
 *
 * Return: returns an integer and -1 if power is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
