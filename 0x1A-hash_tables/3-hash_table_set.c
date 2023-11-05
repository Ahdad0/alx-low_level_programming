#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 *
 * @ht: hash table
 * @key: given key
 * @value: given value
 *
 * Return: 1 (Success) | 0 (Failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	char *dup_value, *dup_key;

	if (!ht || (!key || !(*key)) || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	dup_value = strdup(value);
	if (!dup_value)
		return (0);

	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
		{
			free(node->value);
			node->value = dup_value;
			return (1);
		}
		node = node->next;
	}

	dup_key = strdup(key);
	if (!dup_key)
	{
		free(dup_value);
		return (0);
	}

	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->key = dup_key, node->value = dup_value;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
