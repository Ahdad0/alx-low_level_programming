#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *check = head;
	dlistint_t *re = head;

	if (!head)
		return (NULL);

	while (check != NULL)
	{
		if (i == index)
		{
			re->n = check->n;
			break;
		}
		check = check->next;
		i++;
	}
	
	return (re);
}
