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

	char *u = malloc(sizeof(char));

	if (str == NULL || u == 0)
		return (NULL);
	while (str[n] != '\0')
		n++;
	for (i = 0 ; i <= n ; i++)
	{
		u[i] = str[i];
	}
	return (u);
}
