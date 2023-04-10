#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: paramete of string to be converted
 *
 * Return: nothiing
 */
int _atoi(char *s)
{
	int t;
	unsigned int n;
	char *temp;

	temp = s;
	n = 0;
	t = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			t *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			n = n * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (n * t);
}
