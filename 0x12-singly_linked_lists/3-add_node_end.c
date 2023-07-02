#include "lists.h"

/**
 * add_node_end - add node at the beginning
 * @head: head
 * @str: string
 * Return: end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *current;

	if (str == NULL)
	{
		return (NULL);
	}

	end = malloc(sizeof(list_t));

	if (end == NULL)
	{
		return (NULL);
	}

	end->len = strlen(str);
	end->str = strdup(str);
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = end;

	return (end);
}
