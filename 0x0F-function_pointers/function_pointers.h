#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H
#define NULL ((void *)0)
int _putchar(char c);

void print_name(char *name, void (*f)(char *));

#endif
