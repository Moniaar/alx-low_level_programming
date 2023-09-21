#include "list.h"

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
	list_t *nhead = malloc(sizeof(list_t));

	if (!head || !nhead)
		return (NULL);
	if (str)
	{
		nhead->str = strdup(str);
		if (!nhead_>)
		{
			free(nhead);
			return (NULL);
		}
		nhead->len = _strl(nhead->str);
	}
	nhead->next = *head;
	*head = nhead;
	return (nhead);
}
