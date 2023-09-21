#include "list.h"

/** free_list - frees the list of the all of the nodes
 *
 * @head: head of the nodes
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *node, *nnode;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next_n = node->next;
		free(node->str);
		free(node);
		node = next_n;
	}
}
