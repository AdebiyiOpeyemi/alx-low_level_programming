#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees space allocated to dog
 * @d: struct pointer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
