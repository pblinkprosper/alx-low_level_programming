#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: first string to be compared
 * @s2: second string for comparison
 *
 * Return: nothing
 */
int _strcmp(char *s1, char *s2)
{
	int r, n;

	for (r = 0; s1[r]; r++)
		;
	for (n = 0; s2[n]; n++)
	{
		if (s1[r] == s2[n])
		{
			break;
		} else if (s1[r] < s2[n])
		{
			break;
		} else
		{
			break;
		}
	}
	return (*s1 - *s2);
}
