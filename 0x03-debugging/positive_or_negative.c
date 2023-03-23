#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @i: parameter that holds integer to be tested
 *
 * Return: always 0 success
 */
void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	printf("%d ", i);
	if (i > 0)
	{
		printf("is positive\n");
	}
	if (i == 0)
	{
		printf("is zero\n");
	}
	if (i < 0)
	{
		printf("is negative\n");
	}
}
