#include <stdio.h>

/**
 *main - entry point
 *
 *Description: This program will print
 * all possible combinations of single-digit numbers
 *
 *Return: Alway 0 (Success)
*/

int main(void)
{
int r = 0;
for (r = 0; r < 10; r++)
{	putchar(r + '0');
	if (r != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n')
return (0);
}

