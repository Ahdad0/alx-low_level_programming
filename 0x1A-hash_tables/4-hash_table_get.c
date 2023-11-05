#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key in hash table
 *
 * @ht: hash table
 * @key: given key
 *
 * Return: value (Success) | NULL (Failure)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *nod;

	if (ht == 0 || key == 0)
	{
		return (0);
	}

	i = key_index((unsigned char *)key, ht->size);
	nod = ht->array[i];

	while (nod)
	{
		if (strcmp(key, nod->key) == 0)
		{
			return (nod->value);
		}

		nod = nod->next;
	}

	return (0);
}
