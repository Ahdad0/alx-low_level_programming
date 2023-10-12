#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 *
 * @head: head of the node
 * @n: data
 *
 * Return: node or NULL if fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *last = *head;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		(*head) = node;
		return (node);
	}

	while (last->next)
	{
		last = last->next;
	}

	last->next = node;
	node->prev = last;

	return (node);
}
