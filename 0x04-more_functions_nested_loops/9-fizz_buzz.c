#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This is the fizzBuzz famous program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 1 ; x <= 100 ; x++)
	{
		if (x % 3 == 0 && !(x % 5 == 0))
			printf("Fizz");
		printf(" ");
		else if (x % 5 == 0 && !(x % 3 == 0)
				printf("Buzz");
				printf(" ");
				else if (x % 3 == 0 && x % 5 == 0)
				printf("FizzBuzz");
				printf(" ");
				else
				printf("%d", x);

				if (x != 100)
				printf(" ");
				else
				printf("\n");
				}
				return (0);
				}
