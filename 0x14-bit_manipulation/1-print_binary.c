#include "main.h"
#include <stdlib.h>

/**
 * print_binary - a function that prints the binary representation of a number
 *
 * @n: number to be printed
 *
 * Return: nothing ,Void
 */

void print_binary(unsigned long int n)
{
	int bitnum, displayed;

	bitnum = sizeof(n) * 8;

	displayed = 0;

	while (bitnum)
	{
		if (n & 1L << --bitnum)
		{
			_putchar('1');
			displayed++;
		}
		else if (displayed)
			_putchar('0');
	}
	if (!displayed)
		_putchar('0');
}
