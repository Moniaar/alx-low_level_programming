#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 *
 * @head: a pointer to the first pointer
 *
 * Return: nothing Void
 */

void free_listint(listint_t *head)
{
	listint_t *Node;

	while (head)
	{
		Node = head;
		head = head->next;
		free(Node);
	}
}
