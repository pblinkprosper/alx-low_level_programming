#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function multiplies two numbers
 * @argc: the number of arguments passed into the program
 * @argv: an array of strings passed to the program
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
