#include <stdio.h>
/**
 * main - prints 1, 2, 3...
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
