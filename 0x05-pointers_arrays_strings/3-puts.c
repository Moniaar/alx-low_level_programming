#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string, followed by a new line
 *
 * @str: input characters of a string
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

