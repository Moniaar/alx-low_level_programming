#include "main.h"

/**
 * get_endianness -  a function that checks the endianness
 *
 * Return: 0 if big endiann is detected, 1 if it's small
 */

int get_endianness(void)
{
	unsigned long int jk;

	jk = 1;

	return (*(char *)&jk);
}
