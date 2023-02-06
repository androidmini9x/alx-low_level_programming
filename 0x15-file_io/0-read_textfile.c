#include "main.h"
/**
 * read_textfile - reads a text file and prints it.
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: fd_w of printed char
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_w, fd_r;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd_r = read(fd, buffer, letters);
	if (fd_r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	fd_w = write(STDOUT_FILENO, buffer, fd_r);
	if (fd_w == -1 || fd_w != fd_r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);

	return (fd_w);
}
