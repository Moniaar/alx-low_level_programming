#include<stdio.h>
#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 *
 * @a: string
 *
 * Return: Always 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0 ; m < 8 ; m++)
	{
		for (n = 0 ; n < 8 ; n++)
		{
			putchar(a[m][n]);
		}
		_putchar('\n');
	}
}
