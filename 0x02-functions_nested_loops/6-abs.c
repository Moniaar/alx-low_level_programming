#include"main.h"

/**
 *  _abs - a function that computes the absolute value of an integer
 *
 * @n: input number
 *
 * Return: Always n (Success)
*/

int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
