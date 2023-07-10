#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 or 0 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int succ;
	int len = 0;

	if (!filename)
	{
		return (-1);
	}

	while (text_content[len])
	{
		len++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	succ = write(file, text_content, len + 1);
	if (succ == -1)
		return (-1);

	close(file);
	return (1);
}
