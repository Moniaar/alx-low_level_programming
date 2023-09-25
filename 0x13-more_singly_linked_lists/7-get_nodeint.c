#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list
 *
 * @head: a pointer to the next node
 *
 * @index: index of the node we wanna get
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *Node;
	unsigned int k;

	for (Node = head, k = 0; Node && k < index; Node = Node->next, k++)
		;
	return (Node);
}
