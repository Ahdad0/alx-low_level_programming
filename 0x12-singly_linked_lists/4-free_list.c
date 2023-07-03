#include "lists.h"

/**
 * free_list - free allocated memory
 *
 * @head: head of the node
 */
void free_list(list_t *head)
{
	list_t *Node;

	while (head != NULL)
	{
		Node = head;
		head = head->next;
		free(Node->str);
		free(Node);
	}
}
