#include<stdio>

/**
 * main - To infinity and beyond
 *
 * @argv: input
 *
 * @argc: input
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int s = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc] ; *c ; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
