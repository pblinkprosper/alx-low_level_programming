#include "main.h"
/**
 * _strspn - function that calculates length of substring prefix
 * @s: the string to be scanned
 * @accept: string containing list of characters to match with string s
 *
 * Return: returns number of bytes in prefix of substring s which
 * consists of only the bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n;

	for (m = 0; s[m]; m++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[m] == accept[n])
				break;
		}
		if (accept[n] == '\0')
			return (m);
	}
	return (m);
}
