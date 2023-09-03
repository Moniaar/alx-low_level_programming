#include<stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line
 *
 * @s: string
 *
 * Return: Always 0 (Succes)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		_putchar('\n');
	}
}
