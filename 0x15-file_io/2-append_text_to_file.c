#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: s the NULL terminated string to add at the end of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int su;
	int len = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}

		su = write(file, text_content, len);
		if (su == -1)
			return (-1);
	}

	close(file);
	return (1);
}
