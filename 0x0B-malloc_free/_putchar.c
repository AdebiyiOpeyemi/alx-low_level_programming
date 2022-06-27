#include <unistd.h>
/**
 * _putchar - prints a char to stdout
 * @: char to print
 * Return: 1 on success or -1 otherwise
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
