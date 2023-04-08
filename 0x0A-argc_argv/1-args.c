#include <stdio.h>
/**
 * main - this function prints the number of arguments
 * @argc: the number of arguments passed into the program
 * @argv: an array of strings passed to the program
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	argv[0] = argv[argc];
	printf("%d\n", argc - 1);
	return (0);
}
