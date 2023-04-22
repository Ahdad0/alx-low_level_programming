#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init a struct
 * @d: struct
 * @name: value
 * @age: value
 * @owner: value
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == '\0')
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
