#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

char *create_buffer(void);
void close_file(int fd);
void copy_file(const char *file_from, const char *file_to);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: name of file buffer
 *
 * Return: pointer to the newly-allocated buffer
 */
char *create_buffer(void)
{
	char *buffer = malloc(BUFFER_SIZE * sizeof(char));

	if (buffer == NULL)
	{
		perror("Error: Unable to allocate buffer");
		exit(EXIT_FAILURE);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		perror("Error: Unable to close file descriptor");
		exit(EXIT_FAILURE);
	}
}

/**
 * copy_file - copies content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: Always 0
 */
void copy_file(const char *file_from, const char *file_to)
{
	int from, to, r, w;
	char *buffer;

	buffer = create_buffer();

	from = open(file_from, O_RDONLY);
	if (from == -1)
	{
		perror("Error: Unable to open source file");
		free(buffer);
		exit(EXIT_FAILURE);
	}

	to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		perror("Error: Unable to open or create destination file");
		free(buffer);
		close_file(from);
		exit(EXIT_FAILURE);
	}

	do {
		r = read(from, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			perror("Error: Unable to read from source file");
			free(buffer);
			close_file(from);
			close_file(to);
			exit(EXIT_FAILURE);
		}

		w = write(to, buffer, r);
		if (w == -1)
		{
			perror("Error: Unable to write to destination file");
			free(buffer);
			close_file(from);
			close_file(to);
			exit(EXIT_FAILURE);
		}

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);
}

/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: Success (0), Error (1)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	copy_file(argv[1], argv[2]);

	return (EXIT_SUCCESS);
}
