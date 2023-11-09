#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at
 * the beginning of a dlistint_t list.
 *
 * @head: The Head of the list
 *
 * @n: The field of the inserted node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *New = malloc(sizeof(dlistint_t));

	if (!head || !New)
		return (New ? free(New), NULL : NULL);

	New->n = n;
	New->prev = NULL;
	if (!*head)
	{
		*head = New;
		New->next = NULL;
	}
	else
	{
		New->next = *head;
		(*head)->prev = New;
		*head = New;
	}
	return (New);
}
