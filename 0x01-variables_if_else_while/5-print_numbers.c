#include <stdio.h>
/**
 * main - main return single digits of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '\0'; i <= '\t'; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
