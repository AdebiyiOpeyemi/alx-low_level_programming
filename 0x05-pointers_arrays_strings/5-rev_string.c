#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string pointer
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
 * rev_string - Reverse a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	j = (_strlen(s) - 1);
	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++, j--;
	}
}
