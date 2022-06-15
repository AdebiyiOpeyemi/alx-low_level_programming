#include "main.h"
/**
 * _strlen - returns the length of string
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
 * _strncat - concatenates two strings of specified bytes
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = _strlen(dest);
	int j;

	for (j = 0 ; j < n && src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
