#include<stdio.h>
#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 *
 * @c: first occurrence of the character
 *
 * @s: input string
 *
 * Return: c if true, NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
        int k;

        for (k = 0 ; s[k] >= '\0' ; k++)
        {
                if (s[k] == c)
                {
                        return (s + k);
                }
        }

        return ('\0');
}
