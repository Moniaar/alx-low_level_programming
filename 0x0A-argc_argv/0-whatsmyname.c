#include<stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 *
 * @argc: input
 *
 * @argv: input value
 * Return: 0 (Success)
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
