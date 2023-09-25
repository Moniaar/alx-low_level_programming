#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data
 * (n) of a listint_t linked list
 *
 * @head: a pointer to the first node
 *
 * Return: sum of the data inside of the linked list
 */

int sum_listint(listint_t *head)
{
	int sums;
	sums = 0;

	while (head)
	{
		sums += head->n;
		head = head->next;
	}
	return (sums);
}
