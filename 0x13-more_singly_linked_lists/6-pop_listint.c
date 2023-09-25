#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 *
 * @head: a pointer to the first node
 *
 * Return: value of a popped up node
 */

int pop_listint(listint_t **head)
{
	listint_t *Node;
	int k;

	if (!head || !*head)
	{
		return (0);
	}
	Node = (*head)->next;
	k = (*head)->n;
	free(*head);
	*head = Node;
	return (k);
}
