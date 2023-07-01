#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - stru
 * @h: head
 * Return: count
 */
size_t print_list(const list_t *h)
{
	list_t *dup;
	size_t count = 0;

	dup = malloc(sizeof(list_t));

	dup->str = "(nil)";
	dup->len = 0;

	if (h->str == NULL)
	{
		printf("[%d] %s\n", dup->len, dup->str);
		count++;
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
	}

	h = h->next;

	if (h->str == NULL)
	{
		printf("[%d] %s\n", dup->len, dup->str);
		count++;
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
	}

	free(dup);
	return (count);
}
