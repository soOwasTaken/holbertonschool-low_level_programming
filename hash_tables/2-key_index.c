#include "hash_tables.h"
/**
 * key_index - implementation of the djb2 algorithm
 * @key: string used to generate hash value
 * @size: size of the hashtable
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
