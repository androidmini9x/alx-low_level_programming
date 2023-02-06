#include "main.h"
/**
 * create_file - creates a file.
 * @filename: filename
 * @text_content: number of letters it should read and print
 * Return: count of printed char
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd_w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content && text_content[len] != '\0')
		len++;

	fd_w = write(fd, text_content, len);
	if (fd_w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
