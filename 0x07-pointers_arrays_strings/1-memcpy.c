#include<stdio.h>
#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @n: bytes as an input from user
 *
 * @src: memory Area
 *
 * @dest: memory area
 *
 * Return: a pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0 ; p < n ; p++)
	{
		dest[p] = src[p];
	}
	return (dest);
}
