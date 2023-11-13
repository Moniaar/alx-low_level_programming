#include"main.h"

/**
 * _islower - A function to showcase weather it's
 * a lowercase letter or not
 *
 * Return: 1 if c is lowercase,0 otherwise.
 *
 * @c: character input
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
