#include "main.h"
/**
 * _islower - checks for lower case
 * @c: character to check
 * Return: returns 1 for lowercase and 0 for otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
