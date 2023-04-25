#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strdu(char *s)
{
	int i = 0;
	int len = 0;
	char *ar;

	if (!s)
		return (NULL);

	while (s[len])
		len++;

	ar = malloc(sizeof(char) * (len + 1));

	if (!ar)
		return (NULL);

	for (i = 0; i < len; i++)
		ar[i] = s[i];

	ar[i] = '\0';

	return (ar);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));

	if (!new)
		return (NULL);

	new->name = _strdu(name);

	if (!new->name)
	{
		free(new);
		return (NULL);
	}

	new->age = age;
	new->owner = _strdu(owner);

	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	return (new);
}
