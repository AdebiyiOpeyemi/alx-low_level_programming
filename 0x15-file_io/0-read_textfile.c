#include "main.h"
/**
 * read_textfile - read a text file and print to the POSIX stdout
 * @filename: string to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could print, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_wrote, num_read;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	num_read = read(fd, buf, letters);
	if (num_read < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	num_wrote = write(STDOUT_FILENO, buf, num_read);
	if (num_wrote < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (num_read);
}
