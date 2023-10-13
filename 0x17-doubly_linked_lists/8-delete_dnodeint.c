#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at the specified index
 *
 * @head: head of the node
 * @index: index
 *
 * Return: 1 in success otherwize -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *back = *head;
	dlistint_t *front = *head;
	unsigned int i = 0;

	if (!(*head))
		return (1);

	if (index == 0)
	{
		*head = back->next;
		return (1);
	}

	for (i = 0; back != NULL; i++)
	{
		if (i + 1 == index)
		{
			if (front->next->next != NULL)
			{
				front = front->next->next;
				back->next = front;
				front->prev = back;
			}
			else if (front->next->next == NULL)
			{
				back->next = NULL;
			}
			return (1);
		}
		back = back->next;
		front = front->next;
	}

	return (-1);
}
