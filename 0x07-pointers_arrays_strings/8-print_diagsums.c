#include<stdio.h>
#include "main.h"

/**
 * print_diagsums -  a function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 *@a: pointer
 *
 *@size: integer
 *
 *Return: Always 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int j, k;

	for (j = 0 ; j < 0 ; j++)
	{
		for (k = 0 ; k < 0 ; k++)
		{
			_putchar(a[j][k]);
		}
		_putchar('\n');
	}
}
