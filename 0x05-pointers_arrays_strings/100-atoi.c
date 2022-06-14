#include "main.h"
/**
 * _strlen -return length of string
 * @s: string pointer
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * search_index - finds the index where a digit is first found
 * @s: string pointer
 * Return: index of the first digit
 */
int search_index(char *s)
{
	int i;

	for (i = 0 ; i < _strlen(s) ; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i); /* return digits found */
	}
	return (-1); /* return -1 if no digit found */
}

/**
 * search_sign - search a negative integer
 * @s: string pointer
 * Return: 1 or -1
 */
int search_sign(char *s)
{
	int neg = 0, i = 0, sign = 1;

	while (i < (search_index(s)))
	{
		if (s[i++] == '-')
			neg++;
	}
	if (neg % 2 != 0)
		sign = -1;
	return (sign);
}

/**
 * _atoi - convert string to integers
 * @s: string pointer
 * Return: converted integers
 */
int _atoi(char *s)
{
	int num_index = (search_index(s));
	int sign;
	int digits_out = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (search_index(s));

	if (num_index < 0) /* return  0 if string contains no digit */
		return (0);

	sign = search_sign(s);

	while ((s[num_index] >= '0' && s[num_index] <= '9')
		&& (num_index <= _strlen(s)))
	{
		digits_out += 1;
		num_index++;
	}
	i = 1;
	while (i < digits_out)
	{
		t *= 10;
		i++;
	}

	for (i = digit ; i < (digit + digits_out) ; i++)
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}
	return (num * sign);
}
