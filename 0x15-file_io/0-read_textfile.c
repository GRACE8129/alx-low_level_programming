#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	int file_o;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_o = open(filename, O_RDONLY);
	if (file_o == -1)
		return (0);
	 buffer = malloc(sizeof(char) + lettters);
	 if (buffer == NULL)
	 {
		 close(file_o);
		 return (0);
ssize_t read_textfile(const char *filename, size_t letters);	 }

	 lenr = read(file_o, buffer, lettters);
	 close(file_o);
	 if (lenr == -1)
	 {
		 free(bufffer);
		 return (0);
	 }
	 lenw = write(STDOUT_FILENO, buffer, lenr);
	 free(buffer);
	 if (lenr != lenw)
		 return (0);
	 else
		 return (lenw);
}
