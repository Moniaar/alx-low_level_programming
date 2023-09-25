#include "lists.h"

/**
 * print_listint - a function that will print a linked
 * list for you
 *
 * @h: a pointer to the first Node
 *
 * Return: a size of integer
 */

size_t print_listint(const listint_t *h)
{
	size_t k;
	k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
