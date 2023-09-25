#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 *
 * @head: a pointer to the first node in the linked list
 *
 * Return: address of the head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *Node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);
	Node = *head;
	*head = NULL;
	while (Node)
	{
		next = Node->next;
		Node->next = *head;
		*head = Node;
		Node = next;
	}
	return (*head);
}
