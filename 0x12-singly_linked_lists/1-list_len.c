#include "list.h"

/** list_len - calculate the length of a linked string
 *
 * @h: pointer to first node
 *
 * Return: size of int
 */

size_t list_len(const list_t *h)
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
