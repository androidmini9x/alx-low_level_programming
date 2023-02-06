#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: number of letters it should read and print
 * Return: count of printed char
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[len] != '\0')
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
