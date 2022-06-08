#include "main.h"
/**
 * _abs - prints the absolute value of a number
 * @n: character to check
 * Return: always n
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (n);
	else
		return (-n);
	_putchar('\n');
	return (0);
}
