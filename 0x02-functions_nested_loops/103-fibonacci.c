#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	long int i, x = 1, y = 2, sum1 = 0, sum = 0;

	for (i = 0; i < 49; i++)

	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			sum = sum + y;
		}
	sum1 = x + y;
	x = y;
	y = sum;
	}
	printf("%ld\n", sum);
	return (0);
}
