#include"main.h"

/**
 * _isalpha - A function to print the Alphabet in lower
 * case followed bt a new line.
 *
 * @c: input character
 *
 * Return: 1 if it's a character.
 * 0 if it's not
*/

int _isalpha(int c)
{
	char c = 97;

	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
