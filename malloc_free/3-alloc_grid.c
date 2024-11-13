#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: Columns
 * @height: Filas
 * Return: Pointer to @width & @height
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int *));
		if (grid[i] == NULL)
		{
		for (j = 0; j < width; j++)
		{
			free(grid[j]);
			return (NULL);
		}
		}
		if (grid[j] == NULL)
		{
				free(grid[i]);
				return (NULL);
		}
	}
	return (grid);
}
