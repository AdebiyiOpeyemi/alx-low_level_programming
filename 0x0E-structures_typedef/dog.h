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

#endif
