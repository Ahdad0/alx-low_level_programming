#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: s the NULL terminated string to add at the end of the file
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t end;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		end = write(fd, text_content, strlen(text_content));

		if (end == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);

}
