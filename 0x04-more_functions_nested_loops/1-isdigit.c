#include "main.h"
#include <stdio.h>

/**
 * _isdigit - A function that will check on your DIGIT
 *
 * Description: a function that will check
 * for digit numbers from 0 to 9
 *
 * @c: input
 *
 * Return: 1 if it's a number
 * 0 if not.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
