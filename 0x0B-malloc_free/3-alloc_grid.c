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

	parr = malloc(sizeof(*parr) * height);
	if (width <= 0 || height <= 0 || parr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < height ; i++)
		{
			parr[i] = malloc(sizeof(**parr) * width);
			if (parr[i] == 0)
			{
				while (i--)
					free(parr[i]);
				free(parr);
				return (NULL);
			}
			for (j = 0 ; j < width ; j++)
				parr[i][j] = 0;
		}
	}
	return (parr);
}
