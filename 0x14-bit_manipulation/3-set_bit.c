#include "main.h"
#include <stdlib.h>

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 *
 * @n: the index number
 *
 * @index: the bit to be seted
 *
 * Return: 1 if it worked, or -1 if an error is detected
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index >= sizeof(n) * 8)
		return (-1);
	p = !!(*n |= 1L << index);

	return (p);
}
