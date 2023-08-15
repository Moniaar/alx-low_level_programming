#include"main.h"

/**
 * print_last_digit - A function to print the last digit of a number.
 *
 * @n: input number
 *
 * Return: ldigit
*/

int print_last_digit(int n)
{
	int ldigit;
	int n;

	if (n > 0)
		ldigit = n % 10;
	else
		ldigit = -1 * (n % 10);

	_putchar(ldigit + '0');
	return (ldigit);
}
