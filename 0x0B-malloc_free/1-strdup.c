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
	int i;
	int n = 0;
	char *u;

	if (str == NULL)
		return (NULL);
	while (str[n] != '\0')
	{
		n++;
	}
	u = malloc(n * sizeof(*str) + 1);

	if (u == 0)
		return (NULL);
	for (i = 0 ; i <= n ; i++)
	{
		u[i] = str[i];
	}
	return (u);
}
