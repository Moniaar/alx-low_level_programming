#include "hsh.h"

/**
 * get_line - read a line from stdin
 *
 * Return: pointer that points to a str with the line content
 */
char *get_line(void)
{
	char *line;
	size_t buffersize;

	buffersize = 0;
	line = NULL;

	if (getline(&line, &buffersize, stdin) == -1) /* if getline fails */
	{
		if (feof(stdin)) /* test for the eof */
		{
			free(line); /* avoid memory leaks when ctrl + d */
			exit(EXIT_SUCCESS); /* we recieved an eof */
		}
		else
		{
			free(line); /* avoid memory leaks when getline fails */
			perror("error while reading the line from stdin\n");
			exit(EXIT_FAILURE);
		}
	}

	return (line);
}
