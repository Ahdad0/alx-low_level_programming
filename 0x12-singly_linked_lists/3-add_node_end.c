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
	end->next = *head;

	*head = end;

	return (end);
}
