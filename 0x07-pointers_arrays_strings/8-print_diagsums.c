#include<stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: pointer
 *
 * @size: size of the diagonal
 *
 * Return: Always 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int j, sum = 0, sum2 = 0;

	for (j = 0 ; j < size ; j++)
	{
		sum += a[j];
		sum2 = a[size - j - 1];
		a += size;
	}
	printf("%d", sum);
	printf("%d", sum2);
}
