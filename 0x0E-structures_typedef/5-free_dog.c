#include "dog.h"
#include "main.h"

#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 *
 * @d: pointer
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
