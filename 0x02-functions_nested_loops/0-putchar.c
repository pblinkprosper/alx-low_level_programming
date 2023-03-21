#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 success
 */
int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}

int main(void)
{
	char *str = "_putchar";
	for (int i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
