#include "main.h"
/**
 * _strlen - gets the string length
 * @s: string to examine
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
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append to
 * @text_content: string to append
 * Return: 1 on success, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_wrote;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	num_wrote = write(fd, text_content, _strlen(text_content));
	if (num_wrote < 0 || num_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
