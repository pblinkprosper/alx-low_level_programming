#include <stdio.h>

/**
 * main- print largest prime factor of 612852475143
 * Return: always 0 success
 */
int main(void)
{
	int n, l;
	long int m = 612852475143;

	for (l = 2; l <= m; l++)
	{
		if (m % l == 0)
		{
			m = m / l;
			n = l;
		}
	}
	printf("%d\n", n);
	return (0);
}
