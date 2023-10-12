#include "lists.h"

/**
 * free_dlistint - free all the list
 *
 * @head: head of node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
