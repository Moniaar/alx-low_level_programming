#include "main.h"

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
