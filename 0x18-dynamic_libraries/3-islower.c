#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: single integer input
 * Return: return 1 is success and 0 is false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

