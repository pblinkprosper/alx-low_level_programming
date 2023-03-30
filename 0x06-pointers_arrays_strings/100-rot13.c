#include "main.h"
/**
 * rot13 - this function encodes a string using rot13
 * @s: string parameter
 *
 * Return: char type
 */
char *rot13(char *s)
{
	int i, j;

	char rot13a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; rot13a[j]; j++)
		{
		if (s[i] == rot13a[j])
		{
			s[i] = rot13b[j];
			break;
		}
		}
	}
	s[i] = '\0';
	return (s);
}
