#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free
 * @d: dogs
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
