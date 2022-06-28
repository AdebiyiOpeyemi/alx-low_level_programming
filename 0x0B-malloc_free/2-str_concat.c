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
 * str_concat - concatenates two strings
 * @s1: string to concat to
 * @s2: string to concat
 * Return: pointer to concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	char *ptr_offset;
	unsigned int len_s1, len_s2, total_len, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* calculate the length of s1 and s2 */
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	total_len = len_s1 + len_s2 + 1; /* 1 is for the string terminator */
	/** Alocate memory space for the pointer ptr */
	ptr = malloc(sizeof(char) * total_len);
	/* checks if memmory was allocated successfully */
	if (ptr == NULL)
		return (NULL);
	ptr_offset = ptr;
	while (*s1 != '\0')
	{
		ptr_offset[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		ptr_offset[i] = *s2;
		s2++;
		i++;
	}
	ptr_offset[i] = '\0';
	return (ptr);
	free(ptr);
}
