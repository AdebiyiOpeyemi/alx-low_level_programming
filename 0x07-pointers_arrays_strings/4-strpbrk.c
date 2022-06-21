#include "main.h"
#define NULL 0
/**
 * _strpbrk - search for a match of characters of another string
 * in the current string
 * @s: string to be scanned
 * @accept: string to search for
 * Return: pointer to substring of s that matches accept or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flag = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	pos = i;
	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
		return (&s[pos]);
	else
		return (NULL);
}
