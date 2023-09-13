#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 *
 * @size: Array size
 *
 * @action: a pointer to the function you need to use.
 *
 * @array: input array of char
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *stop;

	stop = array + size - 1;

	if (array && size && action)
		do {
			action(*array++);
		} while (array <= stop);
}
