#include "main.h"
#include<stdlib.h>

/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 *
 * @str: given string input
 *
 * Return:  returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *u;
	char r;
	int i;
	int n = 1;

	u = malloc(sizeof(char) * n);
	if (str == NULL || u == NULL)
		return (NULL);
	for (i = 0 ; i < n ; i++)
	{
		r = *(u + i);
		_putchar(r);
	}
	return (u);
}
