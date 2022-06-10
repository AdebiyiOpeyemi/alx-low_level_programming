#include "main.h"
/**
 * print_square - prints a square block of #
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 1 ; row <= size ; row++)
		{
			for (column = 1 ; column <= size ; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
