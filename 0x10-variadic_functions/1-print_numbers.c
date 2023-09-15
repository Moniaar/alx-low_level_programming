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
	unsigned int i = n;

	va_list arr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(arr, n);

	while (i--)
	{
		printf("%d%s", va_arg(arr, int), i ? (separator ? separator : "") : ("\n"));
	}
	va_end(arr);
}
