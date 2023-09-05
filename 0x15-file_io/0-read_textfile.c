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
	int fd;
	ssize_t bw;
	char *pt;

	if (filename == 0)
		return (0);

	pt = malloc(sizeof(char) * letters + 1);

	if (!pt)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(pt);
		return (0);
	}
	bw = read(fd, pt, sizeof(char) * letters);

	if (bw == -1)
	{
		free(pt);
		close(fd);
		return (0);
	}
	bw = write(STDOUT_FILENO, pt, bw);

	if (bw == 1)
	{
		free(pt);
		close(fd);
		return (0);
	}

	free(pt);
	close(fd);
	return (bw);
}
