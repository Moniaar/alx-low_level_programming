#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 *
 * @st: pointer input
 *
 * Return: character
 */

char *string_toupper(char *st)
{
	int u;

	for (i = 0; st[i] != '\0'; i++)
	{
		if (st[i] >= 90 && st[i] <= 122)
			st[i] = st[i] - 32;
	}

	return (st);
}
