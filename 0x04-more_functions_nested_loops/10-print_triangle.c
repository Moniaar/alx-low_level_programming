#include "main.h"
#include <stdio.h>

/**
 * print_triangle - a function that will shape a tringle for u!
 *
 * Description: a program that will shape a tringle for you using #
 *
 * @size: the size of the triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int size;

	if (size > 0)
		for (int u = 1 ; u <= size ; u++)
		{
			for (int p = 1 ; p <= u ; p++)
			{
				_putchar(35);
			}
			_putchar(35);
		}
	else
		_putchar(35);
	return (0);
}

