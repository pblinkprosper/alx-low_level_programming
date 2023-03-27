#include "main.h"
/**
 * rev_string - reverses a string
 * @s: parameter representing the string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int p;
	int q;
	int r;
	int temp;

	p = 0;
	while (s[p] != '\0')
	{
		p++;
	}
	r = 0;
	q = p - 1;

	while (r < q)
	{
		temp = s[r];
		s[r] = s[q];
		s[q] = temp;
		r++;
		q--;
	}
}
