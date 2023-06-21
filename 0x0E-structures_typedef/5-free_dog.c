#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free
 * @d: dogs
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}

		if (d->owner != NULL)
		{
			free(d->owner);
		}

		free(d);
	}
}
