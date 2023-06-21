#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct
 * @d: struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";

		if (d->age == 0)
			d->age = 0;

		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
