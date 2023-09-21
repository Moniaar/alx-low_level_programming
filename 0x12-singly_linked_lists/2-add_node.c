#include "lists.h"

/**
 * add_node - a function to insert a node if it's not there
 *
 * @head: address of the pointer to head node
 * @str: str field of the nofe itself
 *
 * Return: int size
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead = malloc(sizeof(list_t));

	if (!head || !newhead)
		return (NULL);
	if (str)
	{
		newhead->str = strdup(str);
		if (!newhead->str)
		{
			free(newhead);
			return (NULL);
		}
		newhead->len = _strl(newhead->str);
	}
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
