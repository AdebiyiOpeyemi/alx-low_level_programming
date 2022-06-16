#include "main.h"
/**
 * reverse_array - reverse thr elements of an array
 * @a: array
 * @n: number of array elements
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = (n - 1);
	int temp;

	while (start < end)
	{
		temp = a[start]; /*swap the start of the array with the end */
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
