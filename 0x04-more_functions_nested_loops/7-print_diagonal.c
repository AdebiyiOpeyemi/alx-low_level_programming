#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: number to check the length of the line
 * Result: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (j = 1 ; j < i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
