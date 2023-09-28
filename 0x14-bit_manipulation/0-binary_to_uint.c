#include "main.h"

/**
 * int binary_to_uint -  a function that
 * converts a binary number to an unsigned int
 *
 * @b: string including the binary number
 *
 * Return: unsigned form of b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int digitnumber;

	digitnumber = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		digitnumber = digitnumber * 2 + (*b++ - '0');
	}
	return (digitnumber);
}
