#include "lists.h"

/**
 * add_node - add note
 * @head: header
 * @str: string
 * Return: addr
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;

	if (str == NULL)
	{
		return (NULL);
	}

	first = malloc(sizeof(list_t));

	if (first == NULL)
	{
		return (NULL);
	}

	first->str = strdup(str);
	first->len = strlen(str);
	first->next = *head;
	*head = first;

	return (first);
}
