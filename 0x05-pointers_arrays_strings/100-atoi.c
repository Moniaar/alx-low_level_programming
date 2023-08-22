#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer
 *
 * @s: input string
 *
 * Return: integer
*/

int _atoi(char *s)
{
	unsigned int No = 0;
	int signof = 1;

	while (*s++)
	{
		if (No > 0)
			break;
		else if (*s == '-')
			signof *= -1;
		else if (*s >= '0' && *s <= '9')
			No = (No * 10) + (*s - '0');
			_putchar(No + '0');
	}
	return (No * signof);
}
