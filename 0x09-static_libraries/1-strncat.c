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
        int m, i;

        m = 0;

        while (dest[m])
                m++;

        for (i = 0 ; i < n && src[i] != '\0' ; i++)
                dest[m + i] = src[i];

        dest[m + i] = '\0';
        return (dest);
}
