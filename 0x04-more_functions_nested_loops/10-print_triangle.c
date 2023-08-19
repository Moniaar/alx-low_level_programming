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

	int u, p;

	if (size > 0)
		for (u = 1 ; u <= size ; u++)
		{
			for (p = 1 ; p <= size ; p++)
			{
				if ((p + u) <= size)
					_putchar(' ');
				else
					_putchar(35);
					_putchar('\n');
			}
		}
	else if (size <= 0)
		_putchar('\n');
}

