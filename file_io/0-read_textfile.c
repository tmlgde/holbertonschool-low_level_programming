#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters read and printed
 * 0 if function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t letsread;
	ssize_t letswrite;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			return (0);
		}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	letsread = read(fd, buffer, letters);
	if (letsread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	letswrite = write(STDOUT_FILENO, buffer, letsread);
	if (letswrite == -1 || letswrite != letsread)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (letsread);
}

