#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 *
 * @head: a pointer to the first node
 *
 * @n: a value given for the new node
 *
 * Return: pointer to the new born node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !newNode)
	{
		return (NULL);
	}
	newNode->next = NULL;
	newNode->n = n;
	if (!*head)
		*head = newNode;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = newNode;
	}
	return (newNode);
}
