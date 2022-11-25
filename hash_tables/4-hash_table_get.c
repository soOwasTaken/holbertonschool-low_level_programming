#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with the key, or NULL
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
