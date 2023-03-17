#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: this code prints the last digits
 * of a random number
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;
	printf("Last digit of %d is %d ", n, l_digit);
	if (l_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (l_digit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
