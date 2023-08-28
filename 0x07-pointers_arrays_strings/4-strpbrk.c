#include<stdio.h>
#include "main.h"

/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 *
 * @s: string
 *
 * @accept: string
 *
 * Return:  a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int j, k;
	char *p;

	j = 0;

	while (s[j] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[k] == s[j])
			{
				p = &s[j];
				return (p);
			}
			k++;
		}
		j++;
	}
	return (0);
}
