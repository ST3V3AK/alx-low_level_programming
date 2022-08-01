#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array
 * @grid: pointer to grid
 * @height: the number of rows in the grid
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
		free(grid[i]);
	free(grid);
}
