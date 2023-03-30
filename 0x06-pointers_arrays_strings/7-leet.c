#include "main.h"
/**
 * leet - this function encodes a string into 1337
 * @s: parameter for the string
 *
 * Return: return type char
 */
char *leet(char *s)
{
	int i, j;
	char smAlpha[] = "aeotl";
	char bigAlpha[] = "AEOTL";
	char numBers[] = "43071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == smAlpha[j] || s[i] == bigAlpha[j])
			{
				s[i] = numBers[j];
			}
		}
	}
	return (s);
}
