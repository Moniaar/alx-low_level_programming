#include "lists.h"

/**
 * list_len - calculate the length of a linked string
 *
 * @h: pointer to first node
 *
 * Return: size of int
 */

size_t list_len(const list_t *h)
{
	size_t p;

	p = 0;

	while (h)
	{
		h = h->next;
		p++;
	}
	return (p);
}
