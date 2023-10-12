#include "lists.h"

/**
 * sum_dlistint - calcule all sum of elements
 *
 * @head: head of the node
 *
 * Return: sum of element of 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int num = 0;
	dlistint_t *copy = head;

	if (head == NULL)
		return (0);

	while (copy != NULL)
	{
		num += copy->n;
		copy = copy->next;
	}

	return (num);
}
