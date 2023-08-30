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
	if (y < 0)
		return (-1);
		break;
	else if (y == 0)
		return (1);
		break;
	else
		y *= x;
		--y;
	return (_pow_recursion(x, y));
}
