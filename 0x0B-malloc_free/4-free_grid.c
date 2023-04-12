#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free a 2-dimensional grid
 * @grid: first parameter
 * @height: second parameter
 * Return: always 0
 */

void free_grid(int **grid, int height)
{	
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
