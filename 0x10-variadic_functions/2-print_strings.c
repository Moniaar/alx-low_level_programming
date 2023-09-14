#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator:  the string to be printed between the strings
 *
 * @n:  the number of strings passed to the function
 *
 * Return: Nothing void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prs;

	va_star(prs, separator);
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (*separator[i] == NULL)
			printf("(nil)");
			break;
		printf("%s\n", *separator[i]);
		int x = va_arg(prs, char);
	}
	printf("\n");
	va_end(prs);
}
