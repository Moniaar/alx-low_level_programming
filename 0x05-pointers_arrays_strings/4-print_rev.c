#include "main.h"
#include <stdio.h>

/**
 * print_rev - A function that will write a string in reverse
 * followed by a new line
 *
 * @s: input character
 *
 * Return: Always 0 (Success)
*/

void print_rev(char *s)
{
	int u = 0;

	while (s[u])
		u++;

	while (u--)
		putchar(s[u]);
	putchar('\n');
}
