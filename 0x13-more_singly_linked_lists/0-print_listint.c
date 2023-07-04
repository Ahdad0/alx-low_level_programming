#include "lists.h"

/**
 * print_listint - print all elements
 * @h: head
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
