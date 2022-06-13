#include "main.h"
/**
 * _strlen - Returns the length of string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0 ; *s != '\0' ; count++)
	{
		s++;
	}
	return (count);
}
