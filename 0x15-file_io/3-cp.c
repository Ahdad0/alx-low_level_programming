#include "main.h"

/**
 * main - entry point c file to another file
 *
 * @arc:arguments number
 * @arv:arguments file to and file from
 *
 * Return: 0 in succes
 */
int main(int arc, char **arv)
{
	int Fl_from, Fl_to;
	ssize_t Fl_rd = 1024, Fl_wr, close_Fl;
	char content[1024];


	if (arc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	Fl_from = open(arv[1], O_RDONLY);
	if (Fl_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
		exit(98); }
	Fl_to = open(arv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (Fl_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
		exit(99); }
	while (Fl_rd == 1024)
	{
		Fl_rd = read(Fl_from, content, 1024);
		if (Fl_rd == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
			exit(98); }
		Fl_wr = write(Fl_to, content, Fl_rd);
		if (Fl_wr == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
			exit(99); }
	}
	close_Fl = close(Fl_from);
	if (close_Fl == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", Fl_from);
		exit(100); }
	close_Fl = close(Fl_to);
	if (close_Fl == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", Fl_to);
		exit(100); }
	return (0);
}
