#include "main.h"

/**
 * _realloc - allocate memory using malloc and free
 *
 * @ptr: pointer to that part of the memory
 *
 * @old_size: size in bytes, allocated space for ptr
 *
 * @new_size: size in bytes for the new memory
 *
 * Return: null if new_size = 0, ptr value if not null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *point;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		point = malloc(new_size);
		if (point == NULL)
			return (NULL);
		return (point);
	}
	if (new_size > old_size)
	{
		point = malloc(new_size);
		if (point == NULL)
			return (NULL);
		for (k = 0 ; k < old_size && k < new_size ; k++)
			*((char *)point + k) = *((char *)ptr + k);
		free(ptr);
	}
	return (point);
}
