#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints an alphabet in lower case
 *
 * Return: always 0 (success)
 */
int main(void)
{

	char abc;

	for (abc = 'a'; abc <= 'z'; abc++);
	{
		abc = tolower(abc);
		putchar('abc');
	}

	putchar('\n')
	return (0);
}
