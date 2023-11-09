#include "lists.h"

/**
 * delete_dnodeint_at_index - a function to delete the node from
 * a user defined structure
 *
 * @head: A pointer to the head of the list
 *
 * @index: The index of the node you want to delete
 *
 * Return: Upon success 1, if failed -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
