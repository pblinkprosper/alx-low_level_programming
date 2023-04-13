#include "main.h"
#include <stdlib.h>
/**
 * word_count - this function counts the number of words in a string
 * @str: the string to be checked
 *
 * Return: the number of words
 */
int word_count(char *str)
{
	int i, c, n;

	i = 0;
	n = 0;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			n++;
		}
	}

	return (n);
}
/**
 * **strtow - this function splits a string into words
 * @str: the string to be split
 *
 * Return: pointer to the new string
 */
char **strtow(char *str)
{
	char **nstr, *temp;
	int i, k, n, c, words, start, end;

	k = 0;
	n = 0;
	c = 0;
	while (*(str + n))
		n++;
	words = word_count(str);
	if (words == 0)
		return (NULL);
	nstr = (char **) malloc(sizeof(char *) * (words + 1));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i <= n; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				nstr[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	nstr[k] = NULL;
	return (nstr);
}
