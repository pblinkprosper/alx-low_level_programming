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
	int (*calc)(int, int);
	char *av = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}
	if ((*av != '+' && *av != '-' && *av != '/' && *av != '%') ||
			(*av + 1) != 0)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((*av == '/' || *av == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(av);
	printf("%d\n", calc(a, b));
	return (0);
}
