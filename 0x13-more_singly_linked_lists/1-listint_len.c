#include "lists.h"

/**
 * listint_len - return number of elements
 * @h: head
 *
 * Return: count
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
