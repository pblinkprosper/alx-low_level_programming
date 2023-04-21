#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
/**
 * struct print - print anything
 * @c: character variable
 * @f: input function
 */
typedef struct print
{
	char *c;
	void (*f)(va_list);
} prin_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
