#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - select the correct function to perform operation
 * asked by the user
 * @s: operator to select (+, -, *, /, %)
 * Return: pointer to operation asked by user
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
