#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 success
 */

int main(void)
{
	char *pu = "_putchar";

	while (*pu)
	{
		putchar(*pu);
		pu++;
	}
	putchar('\n');
	return (0);
}
