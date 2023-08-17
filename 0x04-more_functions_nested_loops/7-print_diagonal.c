#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - A function that will print a
 * diagonal using \
 *
 * Description: a program that will print a
 * diagonal using \
 *
 * @n: input number of times the character \ should be printed
 *
 * Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
	int n;

	for (int u = 0; u < n; u++)
	{
		for (int p = 0; p < n; p++)
		{
			if (p == u)
				_putchar(92);
			else
				_putchar('\n');
		}
		_putchar('\n');
	}
	return (0);
}
