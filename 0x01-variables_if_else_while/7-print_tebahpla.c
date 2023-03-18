#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print alphabets backwards
 *
 * Return: always 0 (success)
 */
in main(void)
{
	char zyx;

	for (zyx = 'z'; zyx >= 'a'; --zyx)
	{
		putchar(zyx)
	}
	putchar('\n');
	return (0);
}
