#include"main.h"

/**
 * print_alphabet - A function to print the Alphabet in lower
 * case followed bt a new line.
 *
*/

void print_alphabet(void)
{
	char r = 97;

	while (r >= 97 && r <= 122)
	{
		_putchar(r);
		r++;
	}
	_putchar('\n');
}
