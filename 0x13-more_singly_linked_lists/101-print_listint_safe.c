#include "lists.h"

/**
 * allo - reallocates memory for number ot array pointers
 *
 * @list: the old list in a linkes list to append
 *
 * @size: always more than the old list
 *
 * @new: new node added to the list
 *
 * Return: poniter to the new list
 */

cont listint_t **_allo(cont listint_t **list, size_t size, const listint_t *new)
{
	const listint_t newNode;
	size_t k;

	newNode = malloc(size * sizeof(listint_t *));

	if (newNode == NULL)
	{
		free(list);
		exit(98);
	}
	for (k = 0 ; k < size - 1 ; k++)
		newNode[k] = list[k];
	newNode[k] = new;
	free(list);
	return (newNode);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 *
 * @head: a pointer to the first node
 *
 * Return: number of nodes in a linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t j, nu;
	const listint_t **list;

	nu = 0;
	**list = NULL;

	while (head != NULL)
	{
		for (j = 0 ; j < nu ; j++)
		{
			if (head == list[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (nu);
			}
		}
		nu++;
		list = allo(list, nu, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (nu);
}
