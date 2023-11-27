#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: On Success (1), On Error (-1)
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_status = write(file_descriptor, text_content, length);

	if (file_descriptor == -1 || write_status == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
