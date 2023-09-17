#include "main.h"
#include <stdio.h>

/**
 * percent_print - a function to handle the % part of a custom
 * printf function
 *
 * @format: cont char arg passed by the user 
 * as a fprmatted string that can's be changed
 *
 * Return: integer value of the characters printed
 */

int percent_print(const char *format, ...)
{
	int cper;

	va_list args;

	va_start(args, format);

	if (format == "%%")
	putchar(37 + '0');
	else
	{
		cper = va_arg(args, int);
		putchar(*format++);
	}

	va_end(args);
	return (cper);
}
