#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	long int i;
	long int fib[50];
	long int sum;

	sum = 0;
	fib[0] = 1;
	fib[1] = 2;
i	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (fib[i] % 2 == 0 && fib[i] <= 4000000)
		{
			sum += fib[i];
		}
	}
	}
	printf("%ld\n", sum);
	return (0);
}
