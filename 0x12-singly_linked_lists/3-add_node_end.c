#include "list.h"

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
	list_t *nnode = malloc(sizeof(list_l));
	list_t *node = *head;

	if (!head || !nnode)
		return (NULL);
	if (str)
	{
		nnode->str = strdup(str);
		if (!nnode->str)
		{
			free(nnode);
			return (NULL);
		}
		nnode->len = _strl(nnode->str);
	}
	if (node)
	{
		while (node->next)
		{
			node = node->next;
		}
		node->next = nnode;
	}
	else
		*head = nnode;
	return (nnode);
}
