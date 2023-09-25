#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 *
 * @h: a pointer to the first Node
 *
 * Return: a size of a list
 */

size_t listint_len(const listint_t *h)
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
