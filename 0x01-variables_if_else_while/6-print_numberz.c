#include <stdio.h>
/**
 * main - main return single digit nums
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
