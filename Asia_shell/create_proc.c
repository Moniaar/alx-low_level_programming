#include "hsh.h"

/**
 * create_process - create a new process
 * @args: array of strings that contains the command and its flags
 *
 * Return: 1 if success, 0 otherwise.
 */
int create_process(char **args)
{
	pid_t PID;
	int stat;

	PID = fork();
	if (PID ==  0)
	{
		/* child process */
		if (execvp(args[0], args) == -1)
		{
			perror("error in new_process: child process");
		}
		exit(EXIT_FAILURE);
	}
	else if (PID < 0)
	{
		/* error forking */
		perror("error in new_process: forking");
	}
	else
	{
		/* parent process */
		do {
			waitpid(PID, &stat, WUNTRACED);
		} while (!WIFEXITED(stat) && !WIFSIGNALED(stat));
	}
	return (-1);
}
