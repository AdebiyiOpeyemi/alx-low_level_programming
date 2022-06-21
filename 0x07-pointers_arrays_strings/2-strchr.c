#include "main.h"
#define NULL 0
/**
 * _strchr - returns the first occurrence of a character in astring
 * @s: string to check
 * @c: charater to be searched
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
