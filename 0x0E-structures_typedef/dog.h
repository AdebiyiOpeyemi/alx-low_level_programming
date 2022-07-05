#ifndef _DOG_H
#define _DOG_H
#define NULL ((void *)0)
/**
 * struct dog - a structure
 * @name: member
 * @age: member
 * @owner: member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - calculate the length of string
 * @str: string to check
 * Return: length
 */
int _strlen(char *str);

/**
 * _strcpy - copy a string from one destination to another
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src);
/**
 * free_dog - frees space allocated to dog
 * @d: struct pointer
 */ 
void free_dog(dog_t *d);
#endif
