#include "main.h"
#include <stdio.h>

/**
 * print_numbers - A function that will print
 * numbers for you
 *
 * Description: A program that will print numbs
 * from 0 to 9 for you
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
