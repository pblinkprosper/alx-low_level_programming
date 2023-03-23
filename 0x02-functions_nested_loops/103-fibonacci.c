#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	int i;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;
	long int sum = 0;
	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];

	if (fib[i] % 2 == 0 && fib[1] <= 4000000)
	{
		sum += fib[i];
	}
	}
	printf("%ld\n", sum);
	return (0);
}
