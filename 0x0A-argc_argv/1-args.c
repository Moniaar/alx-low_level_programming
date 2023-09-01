#include<stdio.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: input
 *
 * @argv: input value
 * Return: 0 upon success, fail if non-zero
 */

int main(int argc, char **argv__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
