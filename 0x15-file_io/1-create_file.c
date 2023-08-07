#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filename: file's name.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 if success | -1 if fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fildes;
	int letters;
	int rw;

	if (!filename)
		return (-1);

	fildes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fildes == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	rw = write(fildes, text_content, letters);

	if (rw == -1)
		return (-1);

	close(fildes);

	return (1);
}
