#include "hash_tables.h"

/**
 * hash_table_delete - free and delete hashtable
 *
 * @ht: hashtable
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long  indx = 0;
	hash_node_t *node, *next;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	while (indx < ht->size)
	{
		node = (ht->array)[indx];
		while (node)
		{
			next = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			node->key = NULL;
			node->value = NULL;
			free(node);
			node = next;
		}
		indx++;
	}
	free(ht->array);
	free(ht);
}
