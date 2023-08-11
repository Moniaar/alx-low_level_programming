#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program will prints all the numbers
 * of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int r;
for (r = 0 ; r <= 9 ; r++)
{
	putchar(r + '0');
}
for (r = 97 ; r <= 102 ; r++)
{
	putchar(r);
}
putchar('\n');
return (0);
}
