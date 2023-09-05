#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that will look
 * for uppercase letters
 *
 * Description: a program that will check
 * for uppercase letters
 *
 * @c: input character
 *
 * Return: 1 if it's uppercase.
 * 0 if not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
