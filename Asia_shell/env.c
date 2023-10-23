#include "hsh.h"

/**
 * env - function that prints enviroment variables
 * @arg: arguments
 *
 * Return: 1 on success, 0 otherwise
 */
int env(char **arg)
{
	int k = 0;
	(void)(**arg);

	while (environ[k])
	{
		write(STDOUT_FILENO, environ[k], _strlen(environ[k]));
		write(STDOUT_FILENO, "\n", 1);
		k++;
	}
	return (-1);
}
