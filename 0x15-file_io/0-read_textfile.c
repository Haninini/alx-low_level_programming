#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to the name of the file
 * @letters: the number of letters it should read and print
 * Return: if the file can not be opened or read, return 0
 *         otherwise the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenre, lenwr;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenre = read(fd, buffer, letters);
	close(fd);
	if (lenre == -1)
	{
		free(buffer);
		return (0);
	}
	lenwr = write(STDOUT_FILENO, buffer, lenre);
	free(buffer);
	if (lenre != lenwr)
		return (0);
	return (lenwr);
}
