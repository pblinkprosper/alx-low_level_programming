#include <stdio.h>

void __attribute__ ((constructor)) print_text();
/**
 * print_text - this function prints the text given after the main function
 *
 * Return: nothing.
 */
void print_text(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
