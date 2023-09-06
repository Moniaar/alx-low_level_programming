#include "main.h"
#include <stdlib.h>

/**
 * _strlen11 - a function to calculate the length
 *
 * @d: input string
 *
 * Return: int length of the string
 */

int _strlen11(char *d)
{
	int si = 0;

	while (d[si] != '\0')
		si++;
	return (si);
}

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: input string
 *
 * @s2: input string
 *
 * Return: pointer to contents of the 2 strings,
 * Null upon failure
 */

char *str_concat(char *s1, char *s2)
{

	char *y;
	int n = 0;
	int size1, size2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen11(s1);
	size2 = _strlen11(s2);
	y = malloc((size1 + size2) * sizeof(char) + 1);

	if (y == 0)
		return (0);

	while (n <= size1 + size2)
	{
		if (n < size1)
			y[n] = s1[n];
		else
			y[n] = s2[n - size1];
		n++;
	}
	y[n] = '\0';
	return (y);
}
