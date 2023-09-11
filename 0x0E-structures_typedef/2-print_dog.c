#include "dog.h"
#include <stdio.h>

/** print_dog - a function that prints a struct dog
 *
 * @d: pointer from type dog
 *
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name:(nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age:(nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner:(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
