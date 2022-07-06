#include "function_pointers.h"
/**
 * array_iterator - executes a function passed as parameter
 * on each elements of an array
 * @array: array to iterate
 * @size: array size
 * @action: function to be performed on the array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0 ; i < size ; i++)
			action(array[i]);
	}
}
