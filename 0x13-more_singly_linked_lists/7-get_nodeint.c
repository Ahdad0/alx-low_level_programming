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
	unsigned int i = 0;

	while (i < index)
	{
		if (!(head->next))
		{
			return (NULL);
		}

		head = head->next;
		i++;
	}

	return (head);
}
