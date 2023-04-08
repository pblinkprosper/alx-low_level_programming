#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - this function adds only positive numbers
 * @argc: the number of arguments passed into the program
 * @argv: an array of strings passed to the program
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int q, r, sum;

	sum = 0;
	for (q = 1; q < argc; q++)
	{
		for (r = 0; argv[q][r] != '\0'; r++)
		{
			if (!isdigit(argv[q][r]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[q]);
	}
	printf("%d\n", sum);
	return (0);
}
