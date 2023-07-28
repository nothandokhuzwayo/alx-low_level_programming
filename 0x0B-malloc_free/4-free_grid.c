#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: the 2D grid
 * @height: height dimension of the grid
 * Description: frees memory the of the grid
 * Return: n/a
 *
 */

void free_grid(int **grid, int height)
{
	int w;

	for (w = 0; w < height; w++)
	{
		free(grid[w]);
	}
	free(grid);
}
