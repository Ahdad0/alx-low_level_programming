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
	unsigned long int i;
	hash_node_t *curr, *new;

	if (!ht || (!key || !(*key)) || !value)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	curr = ht->array[i];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			if (curr->value == NULL)
				return (0);
			return (1);
		}
		curr = curr->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
		return (0);

	new->value = strdup(value);
	if (new->value == NULL)
		return (0);

	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
