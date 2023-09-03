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
	if (x < 0)
	{
		return (x * _pow_recursion(x + 1, y));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 || y == 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
