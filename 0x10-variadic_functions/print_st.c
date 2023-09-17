#include "main.h"

/**
 * print_st - prints a string of chars for you
 *
 * @format: argument format entered by the user
 *
 * Return: integer to number of strings typed
 */

int print_st(const char *format, ...)
{
	va_list arg;
	char *str;

	va_start(arg, format);

	while (*format)
	{
		if (*format == '%')
			format++;
		if (*format == 's')
			while (*format)
			{
				str = va_arg(arg, char *);
				while (*str != '\0')
				{
					putchar(*str++);
				}

			}
		format++;
	}
	va_end(arg);
	return (*str);
}
