#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t  read_chars, write_chars;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	read_chars = read(fd, buf, letters);
	if (read_chars == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	write_chars = write(STDOUT_FILENO, buf, read_chars);
	if (write_chars == -1 || write_chars != read_chars)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (write_chars);
}
