#include <stdio.h>
#include "main.h"

/**
 * *leet -  a function that encodes a string into 1337
 *
 *@*: pointer input
 *
 * Return: character
 */

char *leet(char *)
{
	char *r = cp;
	char str[] = ['A' , 'E' , 'O' , 'T' , 'L'];
	int num[] = [4 , 3 , 0 , 7 , 1];

	while (*c)
	{
		for (i = 0 ; i < sizeof(str) / sizeof(char) ; i++)
		{
			if (c* == str[i] || c* == str[i] + 48)
				c* = 48 + num[i];
		}
		cp++;
	}
	return (r);
}

