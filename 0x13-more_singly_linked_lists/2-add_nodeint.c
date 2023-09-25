#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at the
 * beginning of a listint_t list
 *
 * @head: the pointer to the first node
 *
 * @n: a value for the new node
 *
 * Return: a pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
	{
		return (NULL);
	}
	newNode->next = NULL;
	newNode->n = n;
	if (*head)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
