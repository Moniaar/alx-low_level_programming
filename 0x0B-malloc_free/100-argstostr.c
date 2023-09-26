#include "main.h"
#include <stdlib.h>

/**
 * _strl - a function tio calculate the length of a string
 *
 * @string: string given
 *
 * Return: int length of a string
 */

int _strl(char *string)
{
	int s;

	s = 0;

	for (; string[s] != '\0' ; s++)
	;
	return (s);
}

/**
 * argstostr - a description to the function
 * @ac: integer
 *
 * @av: arguments
 *
 * Return: a string
 */

char *argstostr(int ac, char **av)
{
	int m, mc, j, cop;

	char *st;

	m = 0;
	mc = 0;
	j = 0;
	cop = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; m < ac ; m++, mc++)
		mc += _strl(av[m]);
	st = malloc(sizeof(char) * mc + 1);
	if (st == 0)
		return (NULL);
	for (m = 0 ; m < ac ; m++)
	{
		for (j = 0 ; av[m][j] != '\0'; j++, cop++)
			st[cop] = av[m][j];
		st[cop] = '\n';
		cop++;
	}
	st[cop] = '\0';
	return (st);
}
