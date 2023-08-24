#include <stdio.h>
#include "main.h"

/**
 * *leet -  a function that encodes a string into 1337
 *
 *@cp: pointer input
 *
 * Return: character
 */

char *leet(char *cp)
{
	char *r = cp;
	char str[] = ['A', 'E', 'O', 'T', 'L'];
	int num[] = [4, 3, 0, 7, 1];
	unsigned int i;

	while (*cp)
	{
		for (i = 0 ; i < sizeof(str) / sizeof(char) ; i++)
		{
			if (*cp == str[i] || *cp == str[i] + 48)
				*cp = 48 + num[i];
		}
		cp++;
	}
	return (r);
}

