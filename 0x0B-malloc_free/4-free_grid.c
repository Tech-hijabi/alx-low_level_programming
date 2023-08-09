#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function frees grid
 * @grid: the 2-dimensional grid created by alloc_grid function
 * @height: the height of the integer
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
