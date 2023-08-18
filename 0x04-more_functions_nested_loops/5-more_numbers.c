#include "main.h"
#include <stdio.h>

/**
 * more_numbers - A function that will print from 0
 * to 14 ten times
 *
 * Description: a program that will print from 0
 * to 14 ten times
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int n, r, c;

	for (r = 1; r <= 10; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			n = c;
			if (c > 9)
			{
				_puctchar(1 + '0');
				n = c % 10;
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
