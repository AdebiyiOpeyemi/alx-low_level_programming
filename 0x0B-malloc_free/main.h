#ifndef _MAIN_H
#define _MAIN_H
/**
 * _strlen - gets the length of string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s);
/**
 * _putchar - prints a char to stdout
 * @c: char to print
 * Return: 1 on success or -1 otherwise
 */
int _putchar(char c);
/**
 * create_array - creates an array of chars
 * @size: size of array
 * c: array element
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c);
/**
 * _strdup - returns a pointer to a duplicated string
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str);
/**
 * str_concat - concatenates two strings
 * @s1: string to concat to
 * @s2: string to concat
 * Return: pointer to concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2);
#endif
