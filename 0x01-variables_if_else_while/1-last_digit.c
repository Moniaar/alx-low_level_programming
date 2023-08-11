#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry Point
 *
 * Description: This program will assign a random value to test its range
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, numb;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	numb = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, numb);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, numb);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, numb);
	return (0);
}
