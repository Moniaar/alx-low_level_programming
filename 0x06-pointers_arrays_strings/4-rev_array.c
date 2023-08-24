#include <stdio.h>
#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers.
 *
 * @a: input
 *
 * @n: the number of elements of the array
 *
 * Return: Alway 0 (success)
*/

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0 , j = (n - 1) ; i < j ; i++, i--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] =k;
	}
}
