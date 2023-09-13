#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: input array
 *
 * @size: array size
 *
 * @cmp: pointer
 *
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array && size && cmp)
		for (j = 0 ; j < size ; j++)
		{
			if (cmp(array[j]))
				return (j);
		}
	return (-1);
}
