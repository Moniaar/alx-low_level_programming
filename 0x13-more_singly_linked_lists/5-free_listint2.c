#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: a pointer to the first node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *Node, *Temp;

	if (!head)
	{
		return;
	}
	Node = *head;
	while (Node)
	{
		Temp = Node;
		Node = Node->next;
		free(Temp);
	}
	*head = NULL;
}
