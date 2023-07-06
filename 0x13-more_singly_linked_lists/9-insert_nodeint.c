#include "lists.h"

/**
 * insert_nodeint_at_index - new node at a given position
 * @head: head
 * @idx: index
 * @n: num
 *
 * Return: lenght or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr;
	listint_t *p = NULL;

	if (!head)
	{
		return (NULL);
	}

	p = *head;

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
	{
		return (NULL);
	}

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	while (i < idx - 1)
	{
		if (!p)
		{
			free(ptr);
			return (NULL);
		}
		p = p->next;
		i++;
	}
	ptr->next = p->next;
	p->next = ptr;
	return (ptr);
}
