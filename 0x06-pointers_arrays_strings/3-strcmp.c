#include <stdio.h>
#include "main.h"

/**
 * _strcmp -  a function that compares two strings
 *
 * @s1: input string
 *
 * @s2: input string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int n, u = 0;

	while (strlen(s1) == strlen(s2))
	{
		for (n = 0 ; s2[n] ; n++)
		{
			if (s1[n] == s2[n])
			u++;
		}
		if (n == u)
			return (1);
	}
	return (n);
}
