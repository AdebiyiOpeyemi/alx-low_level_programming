#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to destination object
 * @b: character to be filled
 * @n: number of bytes to be filled starting from s to be filled
 * Return: destinastion object s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
