#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - it frees a 2d array
 * @grid: input grid
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	}
}
