#include <stdio.h>
/**
 * main - prints hex numbers in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;
	char j;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	for (j = 'a' ; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
