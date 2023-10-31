#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free 2d array
 * @grid: 2d grid
 * @height: dimension of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || height <= 0)
		return;
	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
