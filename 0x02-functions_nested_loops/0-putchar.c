#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: always 0 success
 */

int main(void)
{
	write(2, "_putchar\n", 9);
	return (0);
}
