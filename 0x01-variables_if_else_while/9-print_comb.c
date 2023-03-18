#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all possible combinations of numbers
 * separate them with commas
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; x < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(\n');
	return (0);
}
