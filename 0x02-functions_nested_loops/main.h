#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * _putchar - write character ch to stdout
 *
 * Return: Always 0 (success)
 */
int _putchar(char ch);

/**
 * print_alphabet - prints lower case letters
 *
 * Return: Always 0
 */
void print_alphabet(void);


/**
 * print_alphabet_x10 - prints lower case letters 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void);

/**
 * _islower - checks for lower case
 *@c: character to check
 * Return: returns 1 for lowercase and 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic characters
 * @c: character to check
 * Return: 1 for alphabets and 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @n: number to check
 * Return: returns 1 for positive number, 0 if the number is 0 and -1 otherwise
 */
int print_sign(int n);



#endif
