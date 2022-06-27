#include <stdlib.h>
#include "main.h"
#define NULL ((void *)0)
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: array element
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(size);
	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		ptr[i] = c;
	return (ptr);
	free(ptr);
}
