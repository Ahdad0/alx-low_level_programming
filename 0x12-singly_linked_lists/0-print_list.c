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
	size_t count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		count++;
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
	}

	h = h->next;

	printf("[%d] %s\n", h->len, h->str);
	count++;

	return (count);
}
