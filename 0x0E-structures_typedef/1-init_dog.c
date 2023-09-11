#include "dog.h"

/**
 * init_dog - a function that initialize a variable
 * of type struct dog
 *
 * @d: pointer from type dog
 *
 * @name: pointer from type char
 *
 * @age: input from type float
 *
 * @owner: pointer from type char
 *
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
