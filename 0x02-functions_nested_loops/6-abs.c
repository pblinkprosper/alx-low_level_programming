#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a: parameter to hold the integer
 * Return: always 0 (success)
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
