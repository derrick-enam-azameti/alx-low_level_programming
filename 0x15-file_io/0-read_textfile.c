#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: Number of letters to read and print
 *
 * Return: If the file can not be opened or read, return 0, if filename is NULL
 * return 0, if write fails or does not write the expected amount of
 * bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return (0);
	}

	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(o);
		return (0);
	}

	free(buffer);
	close(o);
	return (w);
}
