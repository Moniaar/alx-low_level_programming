#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements
 * of a doubly linked list
 *
 * @h: the head of the node address
 *
 * Return: Size of a list given already
 */

size_t print_dlistint(const dlistint_t *h)
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
