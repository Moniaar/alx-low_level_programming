#include"main.h"

/**
 * print_alphabet_x10 - A function to print the Alphabet in lower
 * case 10 times followed bt a new line.
 *
*/

void print_alphabet_x10(void)
{
	int o = 0;

	while (o < 10)
	{
		char r = 97;

		while (r >= 97 && r <= 122)
		{
			_putchar(r);
			r++;
		}
	 _putchar('\n');
	o++;
	}
}
