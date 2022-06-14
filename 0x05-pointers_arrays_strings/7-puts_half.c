#include "main.h"
/**
 * _strlen - returns length of string
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
 * puts_half - prints the second half of a string
 * @str: string pointer
 */
void puts_half(char *str)
{
	int length, len1;
	int i;

	length = _strlen(str);
	if (length % 2 != 0)
	{
		len1 = (length + 1) / 2;
	}
	else
	{
		len1 = length / 2;
	}
	for (i = len1 ; i < length ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
