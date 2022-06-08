#include "main.h"
/**
 * print_alphabet_x10 - prints lower case alphabets 10 times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int cnt;

	for (cnt = 1 ; cnt <= 10 ; cnt++)
	{
		char i;

		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
