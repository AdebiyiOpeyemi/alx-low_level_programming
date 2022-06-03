#include <stdio.h>
/**
 * main - return alphabets without q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
			continue;
		if (i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
