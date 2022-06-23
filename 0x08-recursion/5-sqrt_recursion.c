#include "main.h"
/**
 * root_n - finds the root of n
 * @n: number whose root is needed
 * @root: test the root
 * Return: natural sqrt, or -1 otherwise
 */
int root_n(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (root_n(n, root + 1));
}
/**
 * _sqrt_recursion - finds the natural sqrt of n
 * @n: number
 * Return: natural sqrt or -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root_n(n, 0));
}
