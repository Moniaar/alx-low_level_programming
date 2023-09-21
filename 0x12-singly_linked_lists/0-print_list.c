#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strl - return the length of a given string from user
 *
 * @s: string whose length is meant to be checked
 *
 * Return: int length of the string itself
 */

int _strl(char *strl)
{
	int p;
	p = 0;

	if (!strl)
		return (0);
	while (*strl++)
		p++;
	return (p);
}

/** print_list - a function to print a linked list
 *
 * @h: a pointer to the first node
 *
 * Return: a size of an int
 */

size_t print_list(const list_t *h)
{
	size_t k;
	k = 0;

	while (h)
	{
		printf("[%d] %s\n", _strl(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		k++;
	}
	return (k);
}
