#include <stdio.h>
#include "main.h"

/**
 * *_strcat -  a function that concatenates two strings
 *
 * @src: input string
 *
 * @dest: input string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int m, i;
	m = 0;

	char src[];
	char dest[m];

	while (dest[m])
		m++;

	for (i = 0 ; src[i] ; i++)
	{
		dest[m] = src[i];

	}

	return (dest);
}
