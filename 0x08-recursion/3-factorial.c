#include<stdio.h>
#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: input integer number
 *
 * Return: -1 if n is < 0
 * factorial of 0 is 1
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
	{	return (-1);
	}
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
