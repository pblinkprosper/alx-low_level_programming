#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	int s, sum;
	
	sum = 0;
	for (s = 0; s < 1024; s++)
	{
		if (s % 3 == 0 || s % 5 == 0)
		{
			sum = s++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
