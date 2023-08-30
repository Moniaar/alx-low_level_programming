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
	char str[];
	int p;
	s = &str[];

	for (p = 0 ; str[p] != '\0' ; p++)
	{
		_putchar(str[p]);
	}
	_putchar('\n');

}
