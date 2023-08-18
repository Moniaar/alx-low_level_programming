#include "main.h"
#include <stdio.h>

/**
 * print_line - A function that will give you a straight
 * line if it's biggers than 0
 *
 * Description: a that will give you a straight
 * line if it's biggers than 0
 *
 * @n: integr
 *
 * Return: Always 0 (Success)
*/

void print_line(int n)
{
	int chin;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (chin = 1 ; chin <= n ; chin++)
			_putchar('_');
		_pucthar('\n');
	}
}
