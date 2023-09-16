#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * format_ch - formats characters
 *
 * @separator: the one for a string
 *
 * @argp: argument pointer
 */

void format_ch(char *separator, va_list argp)
{
	printf("%s%c", separator, va_arg(argp, int));
}

/**
 * format_int - generate integer
 *
 * @separator: the one for a string
 *
 * @argp: argument pointer
 */

void format_int(char *separator, va_list argp)
{
	printf("%s%d", separator, va_arg(argp, int));
}

/**
 * format_f - generate a float
 *
 * @separator: the one for a string
 *
 * @argp: argument pointer
 */

void format_f(char *separator, va_list argp)
{
	printf("%s%f", separator, va_arg(argp, double));
}

/**
 * format_s - to generate a string
 *
 * @separator: the one for a string
 *
 * @argp: argument pointer
 */

void format_s(char *separator, va_list argp)
{
	char *s = va_arg(argp, char *);

	switch ((int)(!s))
		case 1:
			s = "(nil)";

	printf("%s%s", separator, s);
}

/**
 * prints_all - prints anything for you
 *
 * @format: formats the string
 */

void prints_all(const char * const format, ...)
{
	int j = 0; k = 0;


	va_list argp;

	char *separator;

	*separator = "";

	token_t tokens[] = {
		{"c", format_ch},
		{"i", format_int},
		{"f", format_f},
		{"s", format_s},
		{NULL, NULL}
	};

	va_start(argp, format);
	while (format && format[j])
	{
		while (tokens[k].token)
		{
			if (format[j] == tokens[k].token[0])
			{
				tokens[k].f(separator, argp);
				separator = ", ";
			}
			k++;
		}
		j++;
	}
	printf("\n");
	va_end(argp);
}
