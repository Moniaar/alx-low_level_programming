#include "hsh.h"

/**
 * split - split a string into multiple strings
 * @line: string to be splited
 *
 * Return: pointer that points to the new array
 */
char **split(char *line)
{
	int buffersize, j;
	char **given_tokens;
	char *token;

	buffersize = 64;
	j = 0;
	given_tokens = malloc(buffersize * sizeof(char *));

	if (!given_tokens)
	{
		_puts("allocation error in split_line: tokensi\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, EXPECTED_DELIM);
	while (token != NULL)
	{
		/* handle comments */
		if (token[0] == '#')
		{
			break;
		}
		given_tokens[j] = token;
		j++;
		if (j >= buffersize)
		{
			buffersize += buffersize;
			given_tokens = realloc(given_tokens, buffersize * sizeof(char *));
			if (!given_tokens)
			{
				_puts("reallocation error in split_line: tokens\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, EXPECTED_DELIM);
	}
	given_tokens[j] = NULL;
	return (given_tokens);
}
