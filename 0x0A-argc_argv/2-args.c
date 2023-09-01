#include<stdio.h>

/**
 * main - a program that prints all arguments it receives.
 *
 * @argc: input
 *
 * @argv: input value
 *
 * Return: Always 0 (success)
 */

int main(int argc, char const *argv[])
{
	int u = 0;

	while (argc--)
	{
		printf("%s\n", argv[u]);
		u++;
	}
	return (0);
}
