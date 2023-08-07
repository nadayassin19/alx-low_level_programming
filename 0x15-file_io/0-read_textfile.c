#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: the file's name.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 * & 0 if: -the file can not be opened or read.
 * -filename is NULL.
 * -write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fildes = open(filename, O_RDONLY);

	if (fildes == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(fildes, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(fildes);

	free(buf);

	return (wr);
}
