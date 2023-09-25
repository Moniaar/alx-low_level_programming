#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a new
 * node at a given position
 *
 * @head: a pointer to the first node
 *
 * @idx: index to insert new node
 *
 * @n: value to the new node
 *
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *Node, *newNode = malloc(sizeof(listint_t));
	unsigned int k;

	k = 0;

	if (!head || !newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (!idx)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	node = *head;
	while (Node)
	{
		if (k == idx - 1)
		{
			newNode->next = Node->next;
			Node->next = newNode;
			return (newNode);
		}
		k++;
		Node = Node->next;
	}
	free(newNode);
	return (NULL);
}
