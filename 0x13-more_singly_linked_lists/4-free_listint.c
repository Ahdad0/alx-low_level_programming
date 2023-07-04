#include "lists.h"

/**
 * free_listint - free allocated memory
 *
 * @head: head of the node
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
