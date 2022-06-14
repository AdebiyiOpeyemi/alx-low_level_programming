#include "main.h"
/**
 * _strlen - return the length of a string
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
 * puts2 - print every other character of a string
 * starting with the first one
 * @str: pointer to string
 */
void puts2(char *str)
{
	int i;
	int j = _strlen(str);

	for (i = 0 ; i < j ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
