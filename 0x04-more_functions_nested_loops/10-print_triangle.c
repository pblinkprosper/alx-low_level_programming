#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle, followed by a new
 * line.
 * @size: demensions of triangle
 * Return: nothing
 **/

void print_triangle(int size)
{
	int n, m;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (n = 1; n <= size; n++)
	{
		for (m = size - n; m > 0; m--)
			_putchar(' ');
		for (m = n; m > 0; m--)
			_putchar('#');
		_putchar('\n');
	}
}
