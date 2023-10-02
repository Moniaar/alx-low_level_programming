#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: new file to be read
 *
 * @letters: number of bytes to be read
 *
 * Return: number of bytes printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int newfile;
	ssize_t by;
	char b[READ_BU_SIZE * 8];

	if (!filename || !letters)
		return (0);

	newfile = open(filename, O_RDONLY);

	if (newfile == -1)
		return (0);

	by = read(newfile, &b[0], letters);
	by = write(STDOUT_FILENO, &b[0], by);
	close(newfile);
	return (by);
}
