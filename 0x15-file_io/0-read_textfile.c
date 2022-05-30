#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to the name of the file
 * @letters: the number of letters it should read and print
 * Return: if the file can not be opened or read, return 0
 *         otherwise the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, re);

	if (op == -1 || re == -1 || wr == -1 || w != r)
	{
		free(buf);
		return (0);
	}


	free(buf);
	close(op);

	return (wr);
}
