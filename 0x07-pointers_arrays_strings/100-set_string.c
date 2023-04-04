#include "main.h"
/**
 * set_string - funtion that sets the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: parameter for char
 *
 * Return: nothing
 */
void set_string(char **s,char *to)
{
	*s = to;
}
