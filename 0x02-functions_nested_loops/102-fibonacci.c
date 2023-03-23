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
	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", fib[i]);
	}
	printf("%ld\n", fib[49]);
	return (0);
}
