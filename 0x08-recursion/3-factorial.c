#include "main.h"
/**
 * factorial - function prints the factorial of a given number
 * @n: number to check factorial
 *
 * Return: returns an integer when success or -1 when it fails
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
