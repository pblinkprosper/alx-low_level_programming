#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all combinations of two digits
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; ++i)
	{
		for (j = i + 1; j < 10; ++j)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
