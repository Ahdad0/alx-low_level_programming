#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *front = *h, *back = *h, *insert = NULL;
	unsigned int i = 0;

	if (!(*h))
		return (NULL);
	insert = malloc(sizeof(dlistint_t));
	if (insert == NULL)
		return (NULL);
	while (front != NULL)
	{
		if (idx != 0)
			i++;
		if (i == idx)
		{
			if (front->next != NULL)
				front = front->next;
			break;
		}
		back = back->next;
		front = front->next;
	}
	insert->n = n;
	if (idx != 0)
	{
		back->next = insert;
		insert->prev = back;
		if (front != NULL)
		{
			insert->next = front;
			front->prev = insert;
		}
		else
			insert->next = NULL;
	}
	else if (idx == 0)
	{
		*h = insert;
		insert->prev = NULL;
		insert->next = back;
		back->prev = insert;
		back->next = front;
	}
	return (insert);
}
