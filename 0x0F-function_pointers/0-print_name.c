#include "function_pointers.h"
/**
 * print_name - this function prints a name
 * @name: pointer to the name string
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
