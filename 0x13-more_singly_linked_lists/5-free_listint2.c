#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL
 *
 * @head: header
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (!head || !*head)
	{
		return;
	}

	while (*head)
	{
		node = *head;
		(*head) = (*head)->next;
		free(node);
	}
}
