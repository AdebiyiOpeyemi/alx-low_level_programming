#include "function_pointers.h"
/**
 * print_name - prints a name to stdout
 * @name: string to print
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
