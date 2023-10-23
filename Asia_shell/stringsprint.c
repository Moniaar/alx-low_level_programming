#include "hsh.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - function that prints a string to stdout
 *
 * @str: char pointer variable
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * _strcmp - function that compares two strings
 *
 * @s1: char pointer variable
 * @s2: char pointer variable
 *
 * Return: an integer for the exit status
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}

/**
 * _strlen - A function to return the length of a string
 *
 * @s: input character
 *
 * Return: int length of a string
 */

int _strlen(char *s)
{
	int cnu;

	for (cnu = 0 ; *s != '\0' ; s++)
	{
		++cnu;
	}
	return (cnu);
}
