#include<stdio.h>
#include "main.h"

/**
 * set_string - a function that sets the value of
 * a pointer to a char
 *
 * @s: pointer to a pointer to
 * value of variable named to
 *
 * @to: variable character
 *
 * Return: Always 0 (Success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
