#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - prints the return of a pointer with two arrays
* @width: the width of the integer
* @height: the height of the integer
* Return: NULL if width and height is 0
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int l, o;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (l = 0; l < height; l++)
	{
		grid[l] = malloc(sizeof(int) * width);

		if (grid[l] == NULL)
		{
			for (; l >= 0; l--)
				free(grid[l]);

			free(grid);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (o = 0; o < width; o++)
			grid[l][o] = 0;
	}
	return (grid);
}
