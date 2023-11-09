#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 *
 * @head: The head of the linked list
 *
 * Return: Nothing (Void)
 */

void free_dlistint(dlistint_t *head);
{
	dlistint_t *Node;

	while (head)
	{
		Node = head;
		head = head->next;
		free(Node);
	}
}
