#include<stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: string of char
 *
 * Retrun: length of the string as an integer
 */ 

int _strlen_recursion(char *s)
{
	int p;
	char slen[p];
	*s = slen[p];

	if (slen[p] == 0)
	{
		return (p + 1);
	}
	p++;
	return _strlen_recursion(s);
}
