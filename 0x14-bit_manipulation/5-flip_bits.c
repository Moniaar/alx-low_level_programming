#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 *
 * @n: first number
 *
 * @m: seconed number
 *
 * Return: number of bits needs to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c;

	unsigned long int num;

	c = 0;

	num = n ^ m;

	while (num)
	{
		if (num & 1ul)
			c++;
		num = num >> 1;
	}
	return (c);
}
