#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: header
 * @index: num
 *
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	listint_t *add;
	unsigned int i = 0, data = 0;

	ptr = head;

	while (i <= index)
	{
		if (i == index)
		{
			data = ptr->n;
		}
		else if (i > index)
		{
			return (0);
		}
		ptr = ptr->next;
		i++;
	}

	add = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	add->n = data;
	add->next = head;
	head = add;
	return (add);
}
