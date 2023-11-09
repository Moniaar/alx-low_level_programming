#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 *
 * @head: the head of the linked list
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
