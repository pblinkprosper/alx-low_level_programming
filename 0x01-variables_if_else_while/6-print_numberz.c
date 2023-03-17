#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing digits using putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = '0'; n < '10'; ++n)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
