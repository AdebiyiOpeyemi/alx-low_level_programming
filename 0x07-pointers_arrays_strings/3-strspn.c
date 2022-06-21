#include "main.h"
/**
 * _strspn - calculate the length of a prefix substring
 * @s: string to be scanned
 * @accept: string to scan for
 * Return: length of bytes scanned
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int len = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		unsigned int j;

		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (accept[j] != s[i])
			break;
		len++;
	}
	return (len);
}
