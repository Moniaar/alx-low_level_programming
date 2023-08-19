#include "main.h"

/**
 * print_number - a function to print an integer
 *
 * @n: input number
 *
 * Return: Always 0 (Success)
 *
*/

void print_number(int n)
{
	unsigned int numb = n;

	if (n < 0)
	{
		_putchar('-'); /*To indicate NEG numbers*/
		numb = -numb;
	}
	if ((numb / 10) > 0)
		print_number(numb / 10);
	_putchar((numb % 10) + '0');
}

