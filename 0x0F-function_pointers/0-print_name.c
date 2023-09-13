#include "function_pointers.h"

/**
 * print_name -  a function that prints a name
 *
 * @name: input pointer as a char type
 *
 * @f: function pointer
 *
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
