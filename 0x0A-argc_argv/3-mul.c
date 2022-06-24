#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the multiplication of two numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 for success and 1 for error
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
