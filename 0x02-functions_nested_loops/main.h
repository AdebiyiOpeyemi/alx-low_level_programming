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

/**
 * _abs - prints the absolute value of a number
 * @n: character to check
 * Return: always n
 */
int _abs(int);

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to check
 * Return: the last digit
 */
int print_last_digit(int);

/**
 * jack_bauer - prints every minute of the day of Jack bauer
 * Return: always 0
 */
void jack_bauer(void);

/**
 * times_table - prints multiplication table
 * Return: null
 */
void times_table(void);

/**
 * add - adds two integers 
 * @i: first integer
 * @j: second integer
 * Return: always 0
 */
int add(int, int);

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer to check
 * Return: always 0
 */
void print_to_98(int n);



#endif
