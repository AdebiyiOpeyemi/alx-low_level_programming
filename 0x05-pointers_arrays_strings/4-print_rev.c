#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: pointer to check
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* loop over the string to obtain the length */
	while (*s != '\0')
	{
		length++;
		++s;
	}
	/* set to charcter before the string terminator */
	s--;
	/* Reversing the string */
	for (i = length ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
