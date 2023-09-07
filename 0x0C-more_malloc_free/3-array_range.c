#include "main.h"
#include<stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: minimum input
 *
 * @max: maximum input
 *
 * Return: the pointer to the newly created array
 * Null upon failure
 */

int *array_range(int min, int max)
{
	int j, lent;
	int *p;

	if (min > max)
		return (NULL);
	lent = max - min + 1;

	p = malloc(sizeof(int) * lent);

	if (p == 0)
		return (NULL);
	for (j = 0 ; j < lent ; j++)
		p[j] = min++;
	return (p);
}
