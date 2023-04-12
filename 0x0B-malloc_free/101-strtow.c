#include "main.h"
#include <stdlib.h>
/** strtow - this function splits a string into words
 * @str: the string to be spilt
 *
 * Return: returns a pointer to an array of strings
 */
char **strtow(char *str)
{
	char **words;
	char word;
	int i;

	words = (char **)malloc(sizeof(char *));
	word = strtok(str, " ");
	i = 0;
	while (word != NULL)
	{
		words[i] = word;
		i++;
		words = realloc(words, sizeof(char *) * (i + 1));
		word = strtok(NULL, " ");
	}
	words[i] = NULL;
	return words;
}
