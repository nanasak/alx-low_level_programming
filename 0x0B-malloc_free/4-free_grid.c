#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function to free alloc_grid
 * @grid: the grid
 * @height: height of the grid
 *
 * Return: the freed gried
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}

	free(grid);
}
