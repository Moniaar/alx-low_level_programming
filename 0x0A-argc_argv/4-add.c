#include<stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - To infinity and beyond
 *
 * @argv: input
 *
 * @argc: input
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int s;
	char *cu;

	s = 0;

	while (--argc)
	{
		for (cu = argv[argc] ; *cu ; cu++)
			if (*cu < '0' || *cu > '9')
				return (printf("Error\n"), 1);
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
