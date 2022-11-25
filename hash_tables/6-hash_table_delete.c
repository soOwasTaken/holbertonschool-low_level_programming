#include "hash_tables.h"

/**
 * hash_table_delete - fonction to delete hash table
 * @ht: hash_table
 * Description: delete *ht
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp, *del;

	temp = del = NULL;
	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
			temp = ht->array[index];
		while (temp != NULL)
		{
			del = temp;
			temp = temp->next;
			free(del->key);
			free(del->value);
			free(del);
		}
	}
	free(ht->array);
	free(ht);
}
