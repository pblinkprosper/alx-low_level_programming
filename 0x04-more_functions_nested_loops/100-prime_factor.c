#include <stdio.h>
#include <math.h>
/**
 * main- print largest prime factor of 612852475143
 * Return: always 0 success
 */
int main(void)
{
	long int i, n;
	
	n = 612852475143;
	while (n % 2 == 0)
	{
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
		{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	if (n > 2) {
	printf("%ld\n", n);
	}
	return 0;
}
