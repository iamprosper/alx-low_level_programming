#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Create a 2 dimensional array of integers
 * @width: An integer, the width of the array
 * @height: An integer, the height of the array
 *
 * Return: The 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	int value = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			grid[i][j] = value;
	}

	return (grid);
}
