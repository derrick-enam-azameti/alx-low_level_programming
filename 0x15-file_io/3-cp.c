#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * copy_file - Copies the contents of one file to another.
 * @source_file: The name of the source file.
 * @destination_file: The name of the destination file.
 *
 * Return: 0 on success, otherwise appropriate error code.
 */
int copy_file(const char *source_file, const char *destination_file)
{
	FILE *source, *destination;
	char buffer[BUFFER_SIZE];
	size_t bytes_read;

	source = fopen(source_file, "rb");
	if (source == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", source_file);
		return (98);
	}

	destination = fopen(destination_file, "wb");
	if (destination == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", destination_file);
		fclose(source);
		return (99);
	}

	while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, source)) > 0)
	{
		if (fwrite(buffer, 1, bytes_read, destination) != bytes_read)
		{
			fprintf(stderr, "Error: Can't write to %s\n", destination_file);
			fclose(source);
			fclose(destination);
			return (99);
		}
	}

	fclose(source);
	fclose(destination);

	return (0);
}

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: result
*/
int main(int argc, char *argv[])
{
	const char *source_file = argv[1];
	const char *destination_file = argv[2];
	int result;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}

	result = copy_file(source_file, destination_file);

	return (result);
}
