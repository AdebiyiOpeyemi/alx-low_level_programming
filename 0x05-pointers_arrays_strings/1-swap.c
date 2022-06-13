#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: pointer to integer
 * @b: pointer to integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
