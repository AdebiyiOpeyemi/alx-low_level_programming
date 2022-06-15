#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: 0 for equality, -1 if s1 is less than s2 and
 * 1 if s2 is greater
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0, j = 0 ; s1[i] != '\0' && s2[j] != '\0' ; i++, j++)
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
	}
	return (0);
}
