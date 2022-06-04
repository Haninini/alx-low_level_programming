#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to the name of the file
 * @letters: the number of letters it should read and print
 * Return: if the file can not be opened or read, return 0
 *         otherwise the actual number of letters it could read and print
 *ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nlet;
	int file;
	char *txt;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (txt == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(txt);
		return (0);
	}
	nlet = read(file, txt, sizeof(char) * letters);
	if (nlet == -1)
	{
		free(txt);
		close(file);
		return (0);
	}
	nlet = write(STDOUT_FILENO, txt, nlet);
	if (nlet == -1)
	{
		free(txt);
		close(file);
		return (0);
	}
	free(txt);
	close(file);
	return (nlet);
}
