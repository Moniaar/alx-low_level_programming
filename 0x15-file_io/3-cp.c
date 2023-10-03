#include "main.h"

#define USE "Usage: cp file_from file_to\n"
#define ERR_noread "Error: Can't read from file NAME_OF_THE_FILE %s\n"
#define ERR_nowrite "Error: Can't write to NAME_OF_THE_FILE %s\n"
#define ERR_noclose "Error: Can't close fd FD_VALUE %d\n"
#define PERMISION (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - the main program to create copies the content
 *of a file to another file.
 *
 * @ac: argument counter
 *
 * @av: argument vector
 *
 * Return: 1 upon success, 0 when failed
 */

int main(int ac, char **av)
{
	int nfile, ofile;
	ssize_t by;
	char b[READ_BU_SIZE];

	ofile = 0;
	nfile = 0;

	if (ac != 3)
		dprintf(STDERR_FILENO, USE), exit(97);
	nfile = open(av[1], O_RDONLY);

	if (nfile == -1)
		dprintf(STDERR_FILENO, ERR_noread, av[1]), exit(98);

	ofile = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISION);
	if (ofile == -1)
		dprintf(STDERR_FILENO, ERR_nowrite, av[2]), exit(99);

	while ((by = read(nfile, b, READ_BU_SIZE)) > 0)
		if (write(nfile, b, by) != by)
			dprintf(STDERR_FILENO, ERR_nowrite, av[2]), exit(99);

	if (by == -1)
		dprintf(STDERR_FILENO, ERR_noread, av[1]), exit(98);

	nfile = close(nfile);
	ofile = close(ofile);

	if (nfile)
		dprintf(STDERR_FILENO, ERR_noclose, nfile), exit(100);
	if (ofile)
		dprintf(STDERR_FILENO, ERR_noclose, nfile), exit(100);

	return (EXIT_SUCCESS);
}
