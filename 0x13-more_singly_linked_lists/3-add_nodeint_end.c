#include "lists.h"

/**
 * add_nodeint_end -  add node at the end
 * @head: head
 * @n: data
 *
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *end;

	ptr = malloc(sizeof(listint_t));

	ptr->n = n;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	end = *head;

	while (end->next != NULL)
	{
		end = end->next;
	}

	end->next = ptr;

	return (ptr);
}
