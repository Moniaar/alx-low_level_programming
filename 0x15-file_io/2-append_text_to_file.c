#include "main.h"
/**
 * _stl - a function to return the length of a string
 *
 * @string: the string to be checked
 *
 * Return: int value of length
 */

int _stl(char *string)
{
	int k;

	k = 0;

	if (!string)
	{
		return (0);
	}
	while (*string++)
		k++;
	return (k);
}

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: new file to be created
 *
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 when success, 0 when failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t le, by;

	le = _stl(text_content);
	by = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	if (le)
		by = write(file, text_content, le);
	close(file);
	return (by == le ? 1 : -1);
}
