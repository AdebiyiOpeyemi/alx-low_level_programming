#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - accepts two integers and an operator from user
 * and performs an mathematical operation via function pointer
 * prints the result of the arithmetic
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	/* checking for correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* convert user in put to integer with atoi function */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	/* check for division or modulo by 0 */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(num1, num2));
	return (0);
}
