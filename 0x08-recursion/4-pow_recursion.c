#include<stdio.h>
#include "main.h"

/**
 * _pow_recursion - a function that returns the
 * value of x raised to the power of y
 *
 * @n: input 
 *
 * @x: input
 *
 * Return: -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	int u;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	u = x**y;
	return (u);
}
