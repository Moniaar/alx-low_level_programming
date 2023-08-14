#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: Using sizeOf for knowing differnet
 * sizes of variables
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
		printf("Size of a char: %c bytes(s)\n", sizeof(char));
		printf("Size of an int: %d bytes(s)\n", sizeof(int));
		printf("Size of a long int: %ld bytes(s)\n", sizeof(long));
		printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
		printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
