#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: file's name.
 * @text_content: is the NULL terminated string to add at the end of the file.
 *
 * Return: 1 if success || -1 if fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fildes;
	int letters;
	int rw;

	if (!filename)
		return (-1);

	fildes = open(filename, O_WRONLY | O_APPEND);

	if (fildes == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		rw = write(fildes, text_content, letters);

		if (rw == -1)
			return (-1);
	}

	close(fildes);

	return (1);
}
