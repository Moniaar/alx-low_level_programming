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

	if (n < 0)
		return (-1);
	k = n ^ 0.5;
		return (k);
}
