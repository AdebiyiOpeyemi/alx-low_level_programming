#include "main.h"
/**
 * string_toupper - converts all lowercase letters to uppercase
 * @s: string to check
 * Return: converted string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);

}
