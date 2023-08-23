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
	char src[];
	char dest[m];

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[m] = src[i];
		m++;
	}

	_putchar('\n');
	return (*dest);
}
