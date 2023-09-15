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
	unsigned int i = n;
	char *s;
	va_list prs;

	if (!n)
        {
		printf("\n");
		return;
	}
	va_start(prs, n);

	while (i--)
	{
		printf("%s%s", (s = va_arg(prs, char *)) ? s : "(nil)", i ? (separator ? separator : "") : ("\n"));
	}
	va_end(prs);
}
