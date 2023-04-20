#include "3-calc.h"
/**
 * main - check code
 * @argc: argument counter
 * @argv: argument strings
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];
	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*c == '/' || *c == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(c)(a, b));
	return (0);
}
