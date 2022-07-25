#include "main.h"
/**
 * _strlen - gets the length of a string
 * @s: string to search
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write to file
 * Return: 1 on sucess, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_wrote;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	num_wrote = write(fd, text_content, _strlen(text_content));
	if (num_wrote < 0)
		return (-1);
	close(fd);
	return (1);
}
