#include "main.h"

/**
 * read_textfile - Write a function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: file name
 * @letters: is the number of letters it should read and print
 * Return: lett or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *ptr;
	ssize_t lett;

	if (!filename)
		return (0);

	ptr = malloc(sizeof(char) * letters + 1);
	if (ptr == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(ptr);
		return (0);
	}

	lett = read(file, ptr, sizeof(char) * letters);
	if (lett == -1)
	{
		free(ptr);
		close(file);
		return (0);
	}

	lett = write(STDOUT_FILENO, ptr, lett);
	if (lett == 1)
	{
		free(ptr);
		close(file);
		return (0);
	}

	free(ptr);
	close(file);

	return (lett);
}
