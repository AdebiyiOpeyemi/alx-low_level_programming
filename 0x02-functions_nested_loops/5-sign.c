#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number to check
 * Return: returns 1 for positive number, 0 if the number is 0 and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}

