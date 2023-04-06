#include "main.h"
/**
 * check_length - this function checks the string length
 * @s: parameter for the string
 *
 * Return: integer for string length
 */
int check_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (check_length(s + 1) + 1);
}

/**
 * compare_strings - this function compares two strings
 * @s: the string to be compared
 * @c: first parameter for checking
 * @d: second parameter for checking
 *
 * Return: returns an integer
 */
int compare_strings(char *s, int c, int d)
{
	if (*(s + c) == *(s + d))
	{
		if (c == d || c == d + 1)
		{
			return (1);
		}
		return (compare_strings(s, c + 1, d - 1));
	}
	return (0);
}
/**
 * is_palindrome - this is a function that check if a string is a palindrome
 * @s: string to be checked
 *
 * Return: returns 1 is true and 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compare_strings(s, 0, check_length(s) - 1));
}
