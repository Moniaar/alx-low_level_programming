#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - A function that will print
 * numbers from 0 to 9, excpect 2 and 4.
 *
 * Description: This code will print
 * numbers from 0 to 9, excpect 2 and 4.
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		_putchar(x + 48);
		if ( x != 2 && x != 4)
		{
			_putchar('\n');
		x++;
		}
	}
	return (0);
}