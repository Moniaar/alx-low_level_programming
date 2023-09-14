#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: unsigned const int
 *
 * Return: int value that's the numbers sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list jk;

	va_start(jk, n);

	int i = 0;

	int sum = 0;

	for (i = 0 ; i < n ; i++)
		if (n == 0)
			return (0);
		sum += va_arg(jk, int);

	va_end(jk);
	return (sum);
}
