#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string to check
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
 * _strcat - concatenates two strings
 * @dest: string to check
 * @src: string to check
 * Return: concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	
	i = _strlen(dest);
	for (j = 0 ; src[j] != '\0' ; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
