#include "main.h"
/**
 * guess_the_multiples - this function guesses multiple that
 * creates a square root
 * @x: the number to find its square root
 * @y: the numbers which are multiples that produce x
 *
 * Return: returns the result for x as it cycles through y
 */
int guess_the_multiples(int x, int y)
{
	if (x == (y * y))
	{
		return (y);
	}
	else if (x <= (y * y))
	{
		return (-1);
	}
	return (guess_the_multiples(x, y + 1));
}

/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: number to find its square root
 *
 * Return: return an integer or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (guess_the_multiples(n, 0));
}
