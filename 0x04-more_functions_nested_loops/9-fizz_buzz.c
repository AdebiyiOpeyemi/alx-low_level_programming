#include <stdio.h>
/**
 * main - prints fizz for multiple of 3, buzz for multiple of 5
 * and fizzbuzz for both cases
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (1 % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
