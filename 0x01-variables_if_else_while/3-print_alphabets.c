#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print both lower and uppercase characters
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; ++abc)
	{
		putchar(abc);
	}
	for (abc = 'A'; abc <= 'Z'; ++abc)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
