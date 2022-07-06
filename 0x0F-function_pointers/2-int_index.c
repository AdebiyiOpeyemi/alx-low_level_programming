#include "function_pointers.h"
/**
 * int_index - returns the index of an array if the function
 * applied is true
 * @array: array to check
 * @size: array size
 * @cmp: function to be applied on array elements
 * Return: index of the elements for with cmp is true
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (index = 0 ; index < size ; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
