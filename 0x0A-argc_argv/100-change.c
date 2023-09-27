#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a minimum number of coins
 *
 * @argc: number of command line arguments
 *
 * @argv: a pointer to an array of command lines
 *
 * Return: 0 upon success, non-zero if failed
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int cent[] = {25, 10, 5, 2, 1};
	int m, mincent, money;

	mincent = 0;

	money = atoi(argv[1]);

	for (m = 0; m < 5 ; m++)
	{
		if (money >= cent[m])
		{
			mincent += money / cent[m];
			money = money % cent[m];
			if (money % cent[m] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", mincent);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
