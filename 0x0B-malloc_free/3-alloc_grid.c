#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * @width: input
 *
 * @height: input
 *
 * Return: a pointer to a 2 dimensional array of integers
 * Null upon failure
 */

int **alloc_grid(int width, int height)
{
	int **parr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	parr = malloc(sizeof(int) * width);

	if (parr == NULL)
		return (NULL);
	for (i = 0 ; i < width ; i++)
	{
		j = 0;
		parr = malloc(sizeof(int) * height);
			parr[i][j] = 0;
	}
	free (parr);
	return (parr);
}
