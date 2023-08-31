#include<stdio.h>
#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: input
 *
 * Return: 1 if it's an integer prime number, 0 if it's otherwise
 */

int is_prime_number(int n)
{
	int i;
	i = 2;

	if (n <= 1)
		return (0);
	else if (n % i == 0)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (is_prime_number(n / 2));
}
