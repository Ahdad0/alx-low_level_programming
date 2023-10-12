#include "lists.h"

/**
 * add_dnodeint - add node at the beginning
 *
 * @head: head of the node
 * @n: data
 *
 * Return: node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *check = NULL;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (*head)
		(*head)->prev = node;

	*head = node;

	return (node);
}
