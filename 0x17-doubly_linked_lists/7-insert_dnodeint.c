#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position
 *
 * @idx: The postion to the new node insertion
 *
 * @h: The pointer to the head of the d_linkedlists
 *
 * @n: The integer for the new noode.
 *
 * Return: If failed, NUll. If successed, the address
 * of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *New;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	New = malloc(sizeof(dlistint_t));
	if (New == NULL)
		return (NULL);

	New->n = n;
	New->prev = temp;
	New->next = temp->next;
	temp->next->prev = New;
	temp->next = New;

	return (New);
}
