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
	listint_t *ptr;

	ptr = *head;
	value = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (value);
}
