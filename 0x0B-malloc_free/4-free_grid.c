#include "main.h"
#include<stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 *
 * @grid: input
 *
 * @height: input
 *
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int p = 0;

	for ( ; p < height ; p++)
		free(grid[p]);
	free(grid);
}
