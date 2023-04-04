#include "main.h"
/**
 * print_chessboard - this function prints a chessboard
 * @a: array to print the chessboard
 *
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int v, w;

	for(v = 0; v < 8; v++)
	{
		for (w = 0; w < 8; w++)
		{
			_putchar(a[v][w]);
		}
			_putchar('\n');
	}
}
