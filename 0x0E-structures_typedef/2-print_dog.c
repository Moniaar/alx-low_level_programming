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
	if (d)
	{

		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age ? d->age : "(nil)");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
