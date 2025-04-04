#include "main.h"
/**
 * create_file - Creates a file and writes a string to it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return(-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return(1);
	}

	while (text_content[len] != '\0')
		len++;

	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return(-1);
	}

	close(fd);
	return(1);
}
