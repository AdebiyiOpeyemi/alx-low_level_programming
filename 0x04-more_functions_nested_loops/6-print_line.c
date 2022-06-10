#include "main.h"
/**
 * print_line - print _ n numbee of times and new line for 0 or less
 * @n: number to check
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = n ; i > 0 ; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
