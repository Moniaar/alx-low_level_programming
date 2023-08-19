#include "main.h"

/**
 * print_square - a function that will print a
 * square
 *
 * Description: A program that will print a square
 *
 * @size: input size of the square
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int n;

	int j;

	if (size <= 0)
		_putchar('\n');
	else

	{
		for (n = 1; n <= size; n++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
