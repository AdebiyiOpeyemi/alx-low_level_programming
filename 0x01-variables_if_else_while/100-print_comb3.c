#include <stdio.h>
/**
 * main - print all possible combinations of two-digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = (i + 1) ; j <= '9' ; j++)
		{
			putchar(i);
			putchar(j);

			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
