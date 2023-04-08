#include <stdio.h>
/**
 * main - entry point
 * @argc: the number of arguments passed into the program
 * @argv: an array of strings passed to the program
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	for (argc = 0; argv[argc]; argc++)
	printf("%s\n", argv[argc]);
	return (0);
}
