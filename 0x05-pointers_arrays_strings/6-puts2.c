#include "main.h"
#include <stdio.h>

/**
 * puts2 -  a function that prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 *@str: input string
 *
 * Return: Always 0 (Success)
*/

void puts2(char *str)
{
	int u;

	for (u = 0 ; str[u] != '\0' ; u++)
		if (u % 2 == 0)
			_putchar(str[u]);

	_putchar('\n');
}
