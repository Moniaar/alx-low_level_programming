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

	for (u = 0; st[u] != '\0'; u++)
	{
		if (st[u] >= 97 && st[u] <= 122)
			st[u] = st[u] - 32;
	}

	return (st);
}
