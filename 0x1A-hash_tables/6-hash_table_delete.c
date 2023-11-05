#include "hash_tables.h"

/**
 * hash_table_delete - free and delete hashtable
 *
 * @ht: hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *nex;
	unsigned long i = 0;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	while (ht->size < i)
	{
		node = ht->array[i];
		while (node)
		{
			nex = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			node->value = NULL;
			node->key = NULL;
			free(node);
			node = nex;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
