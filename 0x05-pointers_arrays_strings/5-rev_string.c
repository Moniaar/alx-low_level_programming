#include "main.h"
#include <stdio.h>

/**
 * rev_string -  a function that reverses a string
 *
 * @s: input string
 *
 * Return: Always 0 (Success)
*/

void rev_string(char *s)
{
	int y, j;
	char k;

	for (y = 0 ; s[y] != '\0' ; y++)
		;
/*Going back on the string using counter*/
		for (j = 0 ; j < y / 2 ; j++)
		{
			k = s[j];
			s[j] = s[y - 1 - j];
			s[y - 1 - j] = k;
		}
}
