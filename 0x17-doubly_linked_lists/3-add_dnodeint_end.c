#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at
 * the end of a dlistint_t list.
 *
 * @head: The head of the list
 *
 * @n: The index of the list elements
 *
 * Return: New insertions at the end from type dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *New = malloc(sizeof(dlistint_t)), *node;

	if (!head || !new)
		return (new ? free(new), NULL : NULL);


	New->n = n;
	New->next = NULL;
	if (!*head)
	{
		New->prev = NULL;
		*head = New;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = New;
		New->prev = node;
	}
	return (New);
}
