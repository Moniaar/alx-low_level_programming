#include<unistd.h>
#include"main.h"

/**
 * _putchar - A function to print character into your display
 *@x: The character to be printed.
 *
 * Return: when success 1.
 * when fails 0 an error will occur
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
