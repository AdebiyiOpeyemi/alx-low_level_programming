#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned integers
 * @b: strung that contains binary digits
 * Return: converted number or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, weight = 1;
	int len = 0;

	if (b == NULL)
		return (0);
	for (len = 0 ; b[len] ; )
		len++;
	for (len -= 1 ; len >= 0 ; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num = num + (b[len] - '0') * weight;
		weight *= 2;
	}
	return (num);
}
