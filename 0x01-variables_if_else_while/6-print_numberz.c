#include <stdio.h>

/**
 * main - entry Point
 *
 * Description: This program will print digits from 0 to 9 using
 * putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int n;
for (n = 0 ; n < 10 ; n++)
{       putchar('0'+ n);
};
putchar('\n');
return (0);
