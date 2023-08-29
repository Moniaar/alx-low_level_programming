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
	int j, sum1 = 0, sum2 = 0;

	for (j = 0 ; j < size ; j++)
	{
		sum1 += a[j];
		sum2 += a[size - j - 1];
		a += size;
	}
	printf("%d", sum1);
	printf("%d", sum2);
}
