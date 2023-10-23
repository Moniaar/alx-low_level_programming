#include "hsh.h"

/**
 * interactive - UNIX command line interpreter
 *
 * Return: void
 */
void interactive(void)
{
	char *line;
	char **arg;
	int stat;

	stat = -1;

	do {
		_puts("$ ");
		line = get_line(); /* read line from stdin */
		arg = split(line); /* tokenize line */
		stat = exec_arg(arg);
		/* avoid memory leaks */
		free(line);
		free(arg);
		/* exit with status */
		if (stat >= 0)
		{
			exit(stat);
		}
	} while (stat == -1);
}
