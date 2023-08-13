#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program will print the Alphapets for you
 *
 * Return: Alway 0 (Success)
*/

int main(void)
{
	char om[62] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int r = 0;

	while (om[r] != '\0')

	{
		putchar(om[r]);
		r++;
	}
	return (1);
}
