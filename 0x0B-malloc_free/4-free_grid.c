#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - free a 2 dimentional grid
* @grid: the 2 dimensional grid
* @height: height of the dimensional grid
* Return: void
*/

void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
