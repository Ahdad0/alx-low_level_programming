#include "main.h"

/**
 * create_file - Create a function that creates a file.
 *
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int lett;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		lett = write(fd, text_content, strlen(text_content));

		if (lett == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
