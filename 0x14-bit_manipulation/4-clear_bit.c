#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 *
 * @n: number to the index
 *
 * @index: bits to be cleared
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	if (*n & 1L << index)
		*n = *n ^ 1L << index;
	return (1);
}
