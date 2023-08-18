#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program will show you
 * a combination of 2 possiable digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int r, x = 1;

	for (r = 0; r <= 9; r++)
	{
		if ((x != 0) && (r < x))
		{
			for (x = 1; x <= 9; x++)
			{
				putchar(r  + '0');
				putchar(x + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
