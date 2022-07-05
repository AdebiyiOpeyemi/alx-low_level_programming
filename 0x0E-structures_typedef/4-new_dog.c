#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - calculate the length of string
 * @str: string to check
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * _strcpy - copy a string from one destination to another
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new instance of dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_1;
	char *copy_of_name;
	char *copy_of_owner;

	dog_1 = malloc(sizeof(dog_t));
	if (dog_1 == NULL)
		return (NULL);
	dog_1->age = age;
	/* make copies of name and owner and set to arguments*/
	/* free if error is encountered */
	if (name != NULL)
	{
		copy_of_name = malloc(_strlen(name) + 1);
		if (copy_of_name == NULL)
		{
			free(dog_1);
			return (NULL);
		}
		dog_1->name = _strcpy(copy_of_name, name);
	}
	else
		dog_1->name = NULL;
	if (owner != NULL)
	{
		copy_of_owner = malloc(_strlen(owner) + 1);
		if (copy_of_owner == NULL)
		{
			free(copy_of_name);
			free(dog_1);
			return (NULL);
		}
		dog_1->owner = _strcpy(copy_of_owner, owner);
	}
	else
		dog_1->owner = NULL;
	return (dog_1);
}
