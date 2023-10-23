#include "hsh.h"

/**
 * none_interactive - unix command line interpreter
 *
 * Return: void
 */
void none_interactive(void)
{
	char *line;
	char **arg;

	int stat = -1;

	do {
		line = read_line();
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
