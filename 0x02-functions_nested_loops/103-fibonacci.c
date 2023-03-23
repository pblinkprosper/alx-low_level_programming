#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	long int i, fib[50], fib[0] = 1, fib[1] = 2, sum = 0;

	for (i = 2; i < 49; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (fib[1] % 2 == 0 && fib[i] <= 4000000)
		{
			sum += fib[i];
		}
	}
	}
	printf("%ld\n", sum);
	return (0);
}
