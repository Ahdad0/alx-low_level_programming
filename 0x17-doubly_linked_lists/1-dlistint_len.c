#include "lists.h"

/**
 * dlistint_len - calcule the number of element
 *
 * @h: a head of the node
 *
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
