#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all hex numbers in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int hx;
	char ha;

	for (hx = '0'; hx <= '9'; ++hx)
	{
		putchar(hx);
	}
	for (ha = 'a'; ha <= 'f'; ++ha)
	{
		putchar(ha);
	}
	putchar('\n');
	return (0);
}
