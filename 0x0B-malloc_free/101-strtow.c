#include "main.h"
#include <stdlib.h>
/**
 * strncat_cpy - function that concatenates two strings using n bytes from src
 * @dest: parameter for destination string
 * @src: parameter for source string
 * @i: start of string to copy
 * @n: number of bytes
 *
 * Return: returns value of dest string
 */
char strncat_cpy(char *dest, char *src, int i, int n)
{
	int j;

	for (j = 0; src[i] != ' ' && i < n; j++)
	{
		dest[j] = src[i];
		i++;
	}
	return (i);
}
/**
 * mallocalloc - this function allocates memory for the output
 * array and sets NULL at string end
 * @nstr: the new string to be allocated memory
 * @str: the main string
 * @n: length of the string
 *
 * Return: 0
 */
void mallocalloc(char **nstr, char *str, int n)
{
	int i, j, wn;

	i = 0;
	j = 0;
	wn = 1;
	while (i < n)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && i < n)
			{
				i++, wn++;
			}
		nstr[j] = malloc(sizeof(char) * wn);
		nstr[j][wn] = '\0';
		j++, wn = 1;
		}
	i++;
	}
}
/**
 * word_check - this checks the number of words in a string
 * @str: the string to be checked
 * @n: the lenght of the string
 *
 * Return: 0 if fail and words if succeed
 */
int word_check(char *str, int n)
{
	int i, words;

	i = 0;
	words = 0;
	while (i < n)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && i < n)
			{
				i++;
				words++;
			}
		}
	i++;
	}
	if (words == 0)
	return (0);
	return (words);
}
/**
 * strtow - this function splits a string into words
 * @str: the string to be split
 *
 * Return: pointer to new string
 */
char **strtow(char *str)
{
	char **nstr;
	int i, j, n, words;

	i = 0;
	j = 0;
	n = 0;
	if (str == NULL || str[0] == '\0')
	return (NULL);

	while (*(str + n) != '\0')
	{
		n++;
	}
	words = word_check(str, n);
	if (!words)
	return (NULL);

	nstr = malloc(sizeof(char *) * words);
	mallocalloc(nstr, str, n);
	while (i < n)
	{
		if (str[i] != ' ')
		{
			i = strncat_cpy(nstr[j], str, i, n);
			j++, i--;
		}
	i++;
	}
	nstr[words + 1] = NULL;
	return (nstr);
}
