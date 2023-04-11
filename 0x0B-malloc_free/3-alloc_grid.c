#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimenional array of int
 * @width: parameter fot the width of the array
 * @height: parameter for the height of the array
 *
 * Return: returns pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **tda;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tda = malloc(sizeof(int) * height);
	if (tda == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		tda[i] = malloc(sizeof(int) * width);
		if (tda[i] == NULL)
		{
			while (i >= 0)
			{
				free(tda[i--]);
			}
			free(tda);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			tda[i][j] = 0;
		}
	}
	return (tda);
}
