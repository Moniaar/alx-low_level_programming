#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @c: input char
 *
 * @n: unsigned int
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
