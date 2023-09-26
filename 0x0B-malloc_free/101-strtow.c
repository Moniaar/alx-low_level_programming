#include "main.h"
#include <stdlib.h>

/**
 * count - a function to count the number of words in a string
 *
 * @string: a string input
 *
 * @Return: int numbers of words
 */

int count(char *string)
{
	int m, j;

	for (m = 0 ; string[m] ; m++)
	{
		if (string[m] == ' ')
		{
			if (string[m + 1] != ' ' && string[m + 1] != '\0')
				j++;
		}
		else if (m == 0)
			j++;
	}
	j++;
	return (j);
}

/**
 * strtow - a function that splits a string into words
 *
 * @str: a string to be spilited
 *
 * Return: a pointer to an array of strings
 */

char **strtow(char *str)
{
	int j, k, m, l, n, co;
	char **p;

	co = 0;
	n = 0;
	j = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count(str);
	if (n == 1)
		return (NULL);
	p = (char **)malloc(n * sizeof(char *));

	if (p == NULL)
		return (NULL);
	p[n - 1] = NULL;

	while (str[j])
	{
		if (str[j] != ' ' && (j == 0 || str[j - 1] == ' '))
		{
			for (k = 1 ; str[j + k] != ' ' && str[j + k] ; k++)
				;
			k++;
			p[co] = (char *)malloc(k * sizeof(char));
			k--;
			if (p[co] == NULL)
			{
				for (m = 0 ; m < co ; m++)
					free(p[m]);
				free(p[n - 1]);
				free(p);
				return (NULL);
			}
				for (l = 0 ; l < k ; l++)
					p[co][l] = str[j + l];
				p[co][l] = '\0';
				co++;
				j += k;
		}
		else
			j++;
	}
	return (p);
}
