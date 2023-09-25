#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 *
 * @head: a pointer to the first node
 *
 * @index: index of node to be deleted
 *
 * Return: 1 on success, -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *Node, *prevNode;
	unsigned int k;

	k = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		Node = *head;
		*head = (*head)->next;
		free(Node);
		return (1);
	}
	Node = *head;
	while (Node)
	{
		if (k == index)
		{
			prevNode->next = Node->next;
			free(Node);
			return (1);
		}
		k++;
		prevNode = Node;
		Node = Node->next;
	}
	return (-1);
}
