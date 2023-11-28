#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;
	int length = 0;
	int write_status = 0;

	if (filename == NULL)
		return (-1);

	open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length])
			length++;

		write(file_descriptor, text_content, length);
		close(file_descriptor);

		if (write_status == -1)
			return (-1);
	}
	else
	{
		close(file_descriptor);
	}

	return (1);
}
