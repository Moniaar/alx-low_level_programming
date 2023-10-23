#include "hsh.h"

/**
 * read_line - read a line from the stream
 *
 * Return: pointer that points the the read line
 */
char *read_line(void)
{
	int j, ch, buffersize;
	char *line;

	buffersize = 1024, j = 0;
	line = malloc(sizeof(char) * buffersize);

	if (line == NULL)
	{
		_puts("allocation error in read_stream\n");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		ch = getchar(); /* read first char from stream */
		if (ch == EOF)
		{
			free(line);
			exit(EXIT_SUCCESS);
		}
		else if (ch == '\n')
		{
			line[j] = '\0';
			return (line);
		}
		else
		{
			line[j] = ch;
		}
		j++;
		if (j >= buffersize)
		{
			buffersize += buffersize;
			line = realloc(line, buffersize);
			if (line == NULL)
			{
				_puts("reallocation error in read_stream\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
