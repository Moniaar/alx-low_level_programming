#include"main.h"

/**
 * main - Entry Point
 *
 * Description: a program that prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char print[] = "_putchar";

	while (i < 8)
	{
		_putchar(print[i]);
		i++;
	}
	_putchar('\n');
return (0);
}
