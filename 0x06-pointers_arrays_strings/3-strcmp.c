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
	int r;
	int n;

	r = 0;
	while (s1[r] == s2[r] && (s1[r] != '\0' || s2[r] != '\0'))
	{
		r++;
	}
	n = s1[r] - s2[r];
	return (n);
}
