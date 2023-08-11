#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This program will print the Alphapets for you execpt for e
 * and q
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char r;
for (r = 97 ; r <= 122 ; r++)
{
	if (r != 101 && r != 113)
	putchar(r);
};
putchar('\n');
return (0);
}
