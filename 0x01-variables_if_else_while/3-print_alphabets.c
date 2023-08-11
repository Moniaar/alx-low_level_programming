
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program will print lowercase letters
 * then the upperCase ones
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int r;
for (r = 97 ; r <= 122 ; r++)
{
	putchar(r);
}
for (r = 65 ; r <= 90 ; r++)
	{
	putchar(r);
	}
putchar('\n');
return (0);
}
