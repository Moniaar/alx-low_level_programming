#include<stdio.h>

/**
 * main -  a program that multiplies two numbers
 *
 * @argv: input value
 *
 * @argc: input counter
 *
 * Return: 0 upon success, non-zero if failed
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
