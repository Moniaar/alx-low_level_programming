#include <stdio.h>
#include "main.h"

/**
 * *_strncat - function is similar to the _strcat function, except that
 * it will use at most n bytes from src
 *
 * @dest: input string
 *
 * @src: input string
 *
 * @n: bytes from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

