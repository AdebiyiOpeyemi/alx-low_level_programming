#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * is_num - checks for numbers in a string
 * @argvv: arg vector
 * Return: true if the string contains only integers false otherwise
 */
bool is_num(char *argvv)
{
	int i = 0;

	for (i = 0 ; argvv[i] ; i++)
	{
		if (!(argvv[i] >= '0' && argvv[i] <= '9'))
			return (0);
	}
	return (1);
}
/**
 * main - prints the addition of positive numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 success or 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i = 1, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (is_num(argv[i]))
			result += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", result);
	return (0);
}
