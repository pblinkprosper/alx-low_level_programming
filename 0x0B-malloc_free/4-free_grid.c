#include "main.h"
#include <stdlib.h>
/**
 * free_grid - this function frees the 2 dimensional grid previously created
 * @grid: parameter pointer to pointer for grid
 * @height: parameter for grid height
 *
 * Return: function returns nothing
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
