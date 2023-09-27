#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code for the students
 *
 * @argc: numbers of args
 *
 * @argv: argument vectors
 *
 * Return: always 0 upon success
 */

int main(int argc, char **argv)
{
	char *point = (char *)main;
	int k;

	if (argc != 2)
		printf("Error\n"), exit(1);
	k = atoi(argv[1]);
	if (k < 0)
		printf("Error\n"), exit(2);

	while (k--)
		printf("%02hhx%s", *point, k ? " " : "\n");
	return (0);
}
