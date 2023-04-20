#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - this function prints strings followed by a new line
 * @separator: this is the string to be printed between the strings
 * @n: this is the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
