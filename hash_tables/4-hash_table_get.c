#include "hash_tables.h"

/**
 * hash_table_get - get key associated with index
 * @ht: hash table
 * @key: key
 * Return: index value of key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *k = (const unsigned char *)key;
	unsigned long index;
	hash_node_t *item;

	if (ht == NULL)
		return (NULL);
	index = key_index(k, ht->size);
	item = ht->array[index];
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
