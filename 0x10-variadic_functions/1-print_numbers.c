#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - this function prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the funtion
 *
 * Return: returns void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
