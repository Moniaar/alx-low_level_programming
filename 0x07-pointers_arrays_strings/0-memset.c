#include<stdio.h>
#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @n: bytes of the memory area
 *
 * @s: input pointer
 *
 * @b: constant byte
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	p = 0;

	while (n > 0)
	{
		s[p] = b;
		n--;
		p++;
	}
	return (s);
}
