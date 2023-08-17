#include "main.h"
#include <stdio.h>

/**
 * print_line - A function that will give you a straight
 * line if it's biggers than 0
 *
 * Description: a that will give you a straight
 * line if it's biggers than 0
 *
 * @n: input character
 *
 * Return: Always 0 (Success)
*/

void print_line(int n)
{
	int n = 1;

	while (n > 0)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
			_putchar('_');
	n++;
	}
	return (0);
}
