#include <stdlib.h>
#include "main.h"

/**
 * free_grid- function
 *
 * @grid: input1
 * @height: input2
 *
 * Return:
 */
void free_grid(int **grid, int height)
{
	/* var declaration */
	int i;

	/* code */
	i = 0;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
