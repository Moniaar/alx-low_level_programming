#include "dog.h"
#include <stdlib.h>

/**
 * _stlr - a function to get the lentgh of a string
 *
 * @s: a string to store the length
 *
 * Return: pointer length
 */

int _stlr(const char *s)
{
	int len;

	len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _scop - a function to returb dest with a copy of a string
 * from s
 *
 * @sc: string to copy
 *
 * @dest: the string will be pasted here
 *
 * Return: pointer to have the copy address
 */

char *_scop(char *dest, char *sc)
{
	int y;

	for (y = 0 ; sc[y] ; y++)
		dest[y] = sc[y];
	dest[y] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: char pointer
 *
 * @age: float input value
 *
 * @owner: char pointer
 *
 * Return: dog_t type of pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog1 = (dog_t *) malloc(sizeof(dog_t));

	if (dog1 == NULL)
		return (NULL);

	dog1->name = malloc(sizeof(char) * (_stlr(name) + 1));

	if ((*dog1).name == NULL)
	{
		free(dog1);
		return (NULL);
	}

	dog1->owner = malloc(sizeof(char) * (_stlr(owner) + 1));

	if ((*dog1).owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}

	dog1->name = _scop(dog1->name, name);
	dog1->age = age;
	dog1->owner = _scop(dog1->owner, owner);

	return (dog1);
}
