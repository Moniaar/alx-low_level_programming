#include<stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 *
 * the natural square root of a number
 *
 * @n: input
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int k;
	double power;

	power = n * (1.0 / 2);

	if (n < 0)
		return (-1);
	else if (n > 1000)
		return (power);
	k = n * n;
	return (k);
}
