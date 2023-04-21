#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_char - this function prints a character
 * @c: parameter for character
 *
 * Return: void
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_str - this function prints a string
 * @s: parameter for string
 *
 * Return: void
 */
void print_str(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_int - this function prints an integer
 * @i: parameter for integer
 *
 * Return: void
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_flt - this function prints a float
 * @f: parameter for float
 *
 * Return: void
 */
void print_flt(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - this function prints anything
 * @format: this is the list of argument types passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int a, b;
	prin_t all[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"f", print_flt},
		{NULL, NULL}
	};
	va_list args;
	char *separator = "";

	va_start(args, format);
	a = 0;
	while (format && format[a])
	{
		b = 0;
		while (all[b].c)
		{
			if (*(all[b].c) == format[a])
			{
				printf("%s", separator);
				all[b].f(args);
				separator = ", ";
				break;
			}
			b++;
		}
		a++;
	}
	va_end(args);
	printf("\n");
}
