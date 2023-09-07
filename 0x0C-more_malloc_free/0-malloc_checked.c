#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc
 *
 * @b: unsigned int input
 *
 * Return: a pointer to the allocated memory,
 * NULL or 98 upon fail
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(*p) * b);

	if (p == 0)
		exit(98);
}
