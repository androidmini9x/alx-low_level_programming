#include "main.h"
/**
 * read_textfile - reads a text file and prints it.
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: count of printed char
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buffer;
	size_t fd_r;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd_r = read(fd, buffer, letters);
	if (fd_r <= 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	count = write(STDOUT_FILENO, buffer, letters);
	if (count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (count);
}
