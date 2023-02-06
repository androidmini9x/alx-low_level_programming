#include "main.h"
/**
 * close_file - close file stream
 * @fd: file pointer
 * Return: Void
 */
void close_file(int fd)
{
	int cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * cp - copy file from src to dis
 * @source: source
 * @dist: distenation
 * Return: Always 0.
 */
void cp(char *source, char *dist)
{
	int fd_src, fd_dist, op = 1024;
	char buffer[BUFFERSIZE];

	fd_src = open(source, O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}

	fd_dist = open(dist, O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (fd_dist == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dist);
		close_file(fd_src);
		exit(99);
	}

	while (op == BUFFERSIZE)
	{
		op = read(fd_src, buffer, BUFFERSIZE);
		if (op == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
			exit(98);
		}
		op = write(fd_dist, buffer, op);
		if (op == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dist);
			exit(99);
		}
	}

	close_file(fd_dist);
	close_file(fd_src);
}
/**
 * main - check the code
 * @argc: number of arg
 * @argv: array of value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
