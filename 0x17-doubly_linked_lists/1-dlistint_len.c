#include "lists.h"

/**
 * dlistint_len - a function that returns the number of
 * elements in a linked dlistint_t list
 *
 * @h: Head of the list
 *
 * Return: the number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t k;

	k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
