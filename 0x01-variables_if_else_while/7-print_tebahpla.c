#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program will print the Alphapets for you
 *in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int r;
for (r = 122 ; r <= 97 ; r--)
{
	putchar(r);
}
putchar('\n');
return (0);
}
