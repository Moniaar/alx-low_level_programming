#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth
 * node of a dlistint_t linked list.
 *
 * @head: pointer to current head node
 *
 * @index: index of node to be returned
 *
 * Return: the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	k = 0;

	while (head)
	{
		if (k == index)
			return (head);
		head = head->next;
		k++;
	}
	return (NULL);
}
