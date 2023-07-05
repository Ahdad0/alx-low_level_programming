#include "lists.h"

/**
 * listint_len - return len of the nodes
 * @h: head
 *
 * Return: len
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}

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

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i <= index)
		{
			if (i == index)
			{
				data = ptr->n;
			}
			ptr = ptr->next;
			if (ptr->next == NULL)
			{
				return (NULL);
			}
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
}
