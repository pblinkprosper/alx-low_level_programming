#include "main.h"

/**
 * _strlen - print the lenght of the string
 * @s: parameter to string lenght
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int len;
	
	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
