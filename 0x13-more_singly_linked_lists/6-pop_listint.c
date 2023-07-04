#include "lists.h"

/**
 * pop_listint - delete the head
 * @head: header
 *
 * Return: data of the head
 */
int pop_listint(listint_t **head)
{
	int value;

	value = (*head)->n;
	free(head);
	*head = (*head)->next;
	return (value);
}
