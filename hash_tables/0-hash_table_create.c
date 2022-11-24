#include "hash_tables.h"
/**
 * hash_table_create - implementation of the djb2 algorithm
 * @size: size of the hash table to create.
 *
 * Return: pointer to hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	 hash_table_t *t = malloc(sizeof(hash_table_t));

	if (t == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	t->size = size;
	t->array = malloc(sizeof(hash_node_t) * size);
	if (t->array == NULL)
	{
		free(t);
		return (NULL);
	}

	return (t);
}
