#include <stdlib.h>
#include "main.h"
/**
 * _strlen - gets the length of string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * _strdup - returns a pointer to a duplicated string
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	char *ptr_offset;
	int len_str;

	if (str == NULL)
		return (NULL);
	/**
	 * Allocate memory for the pointer
	 * to the duplicate sting
	 */
	len_str = _strlen(str);
	ptr = malloc(sizeof(char) * len_str + 1);
	if (ptr == NULL)
		return (NULL);
	ptr_offset = ptr;
	while (*str) /* copy string */
	{
		*ptr_offset = *str;
		ptr_offset++;
		str++;
	}
	*ptr_offset = '\0';
	return (ptr);
	free(ptr);
}
