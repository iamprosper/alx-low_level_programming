#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Free a 2 dimensional grid
 * @grid: The 2D array of integer
 * @height: The height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
