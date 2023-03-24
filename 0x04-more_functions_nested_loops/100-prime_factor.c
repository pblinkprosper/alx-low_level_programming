#include <stdio.h>

/**
 * main- print largest prime factor of 612852475143
 * Return: always 0 success
 */
int main(void)
{
	long int i, j, k;
	
	k = -1;
	i = 612852475143;
	while (i % 2 == 0)
	{
		k = 2;
		i /= 2;
	}
	for (j = 3; j <= i / 2; i += 2)
		{
		while (i % i == 0)
		{
			k = j;
			i /= i;
		}
	}
	if (i > 2)
	{
		k = i;
		printf("%ld\n", k);
	}
	return 0;
}
