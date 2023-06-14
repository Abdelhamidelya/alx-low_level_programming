#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*free_grid -function that frees a 2D grid previously created by your alloc_grid
*
*@grid : pointer to the 2D grid
*
*@height : grid height
*
*/

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
		{
		free(grid[count]);
		}
	free(grid);
}
