#include "main.h"
#include<stdlib>

/**
 * _mems - a function to fill the array with 0 values
 *
 * @s: pointer to constant
 *
 * @p: constant
 *
 * @n: maximum bytes usage
 *
 * Return: poniter s
 */

char *_mems(char *s, char p, unsigned int n)
{
	char *sl = s;

	while (n--)
		*s++ = b;
	return (s);
}

/**
 * _calloc - a function that allocates memory for an array, using malloc.
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
	m = malloc(sizeof(int) * nmemb)
		if (m == 0)
			return (NULL);
	_mems(c, 0, sizeof(int) * nmemb);

	return (c);
}
