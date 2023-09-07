#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: input string
 *
 * @s2: input string
 *
 * @n: input as a size
 *
 * Return: pointer to contents of the 2 strings,
 * Null upon failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *y;
	unsigned int size1, size2, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0 ; s1[size1] != '\0' ; size1++)
		;
	for (size2 = 0 ; s2[size2] != '\0' ; size2++)
		;

	y = malloc(size1 + n + 1);

	if (y == 0)
	{
		return (NULL);
	}
	for (j = 0 ; s1[j] != '\0' ; j++)
		y[j] = s1[j];

	for (k = 0 ; k < n ; k++)
	{
		y[j] = s2[k];
		j++;
	}

	y[j] = '\0';
	return (y);
}
