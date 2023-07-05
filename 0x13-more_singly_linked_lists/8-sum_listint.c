#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: head
 *
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
