#include "lists.h"
#include <stdio.h>

void _constructord(void) __attribute__ ((constructor));

/**
 * _constructord - execute the function before the main
 *
 * Return: nothing
 */

void _constructord(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
