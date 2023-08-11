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
int r;
for (r = 0 ; r <= 10 ; r++)
{	putchar(r + '0');
	putchar(',');
	putchar('NULL');
}
return (0);
}

