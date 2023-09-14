#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers
 *
 * @n: the number of integers passed to the function
 *
 * Return: Nothing (void)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, x;
	va_list arr;

	va_start(arr, n);

	for (i = 0 ; i < n ; i++)
	{
		if (separator[i] != NULL)
		{
			printf("%d\n", separator[i]);
			x = va_arg(arr, int);
		}
	}
	va_end(arr);
}
