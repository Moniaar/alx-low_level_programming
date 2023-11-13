#include<stdio.h>
#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: string of char
 *
 * @accept: bytes
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k;

	for (j = 0 ; s[j] != '\0' ; j++)
	{
		for (k = 0 ; accept[k] != s[j] ; k++)
		{
			if (accept[k] == '\0')
				return (j);
		}
	}
	return (j);
}
