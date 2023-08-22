#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 *@src: input string of character
 *
 *@dest: input string of character
 *
 * Return: character (Success)
*/

char *_strcpy(char *dest, char *src)
{
	int y = -1;

	for (y = -1 ; src[y] != '\0' ; y++)
		dest[y] = src[y];

	return (dest);
}
