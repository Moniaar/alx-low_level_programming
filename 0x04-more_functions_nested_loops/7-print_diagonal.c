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
	int ui, sp;

	if (n <= 0)
		_putchar('\n');
	else
		for (ui = 1 ; ui <= n ; ui++)
		{
			for (sp = 1 ; sp <= ui ; sp++)
				_putchar(" ");
			_putchar(92);
			_putchar('\n');
		}
}
