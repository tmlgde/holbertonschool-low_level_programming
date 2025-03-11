#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0)
	{
		return;
	}

	if (height == 0)
	{
		return;
	}

	for (i = 0; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

