#include "main.h"
#include<stdlib.h>

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: input
 *
 * @size: input
 *
 * Return: a pointer to the allocated memory.
 * Null if failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if (size == 0 || nmemb == 0)
		return (NULL);
	c = malloc(size * nmemb);

	if (c == 0)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		c[nmemb] = 0;

	return (c);
}
