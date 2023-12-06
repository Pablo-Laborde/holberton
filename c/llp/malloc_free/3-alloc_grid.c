#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid- function
 *
 * @width: input1
 * @height: input2
 *
 * Return: **int
 */
int **alloc_grid(int width, int height)
{
	/* var declaration */
	int i, j, flag;
	int **grid;

	/* code */
	grid = NULL;
	if ((width > 0) && (height > 0))
	{
		grid = malloc(sizeof(int *) * height);
		if (grid != NULL)
		{
			for (i = 0; i < height; i++)
				grid[i] = NULL;
			i = 0;
			flag = 1;
			while ((i < height) && (flag == 1))
			{
				grid[i] = malloc(sizeof(int) * width);
				if (grid[i] == NULL)
					flag = 0;
				else
					i++;
			}
			if (flag == 0)
			{
				for (i = 0; i < height; i++)
					free(grid[i]);
				free(grid);
			}
			else
				for (i = 0; i < height; i++)
					for (j = 0; j < width; j++)
						grid[i][j] = 0;
		}
	}
	return (grid);
}
