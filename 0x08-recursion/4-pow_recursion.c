#include<stdio.h>
#include "main.h"

/**
 * _pow_recursion - a function that returns the
 * value of x raised to the power of y
 *
 *@y: input
 *
 *@x: input
 *
 * Return: -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	int val;

	val = 1;

	if (y < 0)
	{
		return (-1);
	else if (y == 0)
		return (1);
	else
		val *= x;
	--y;
	}
	return (_pow_recursion(x, y));
}
