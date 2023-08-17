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
	int x;

	int u;

	for (x = 1; x <= 10; x++)
	{
		for (u = 0; u <= 14; u++)
		{
			_puctchar(u + '0');
			_putchar('\n');
		}
		_putchar('\n');
	}
	return (0);
}
