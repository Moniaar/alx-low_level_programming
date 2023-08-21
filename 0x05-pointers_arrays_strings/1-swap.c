#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swapping two values using pointing
 *
 * @a: input int
 *
 * @b: input int
 *
 * Return: Always 0 (Sucess)
 *
*/

void swap_int(int *a, int *b)
{
	int spee;

	spee = *a;
	*a = *b;
	*b = spee;
}
