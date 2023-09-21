#include "lists.h"

/**
 * add_node_end - add a new node at the end
 *
 * @head: the address of the head node
 *
 * @str: the str field to head note
 *
 * Return: size of the linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !newnode)
		return (NULL);
	if (str)
	{
		newnode->str = strdup(str);
		if (!newnode->str)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = _strl(newnode->str);
	}
	if (node)
	{
		while (node->next)
		{
			node = node->next;
		}
		node->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}
