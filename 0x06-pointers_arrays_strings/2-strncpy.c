#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 *
 *@n: input character
 *
 *@dest: input string
 *
 *@src: input string
 *
 * Return: character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0 ; m < n && src[m] != '\0' ; m++)
	{
		dest[m] = src[m];
	}

	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}
