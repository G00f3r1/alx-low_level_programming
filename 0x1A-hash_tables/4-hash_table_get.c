#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key:  is the key you are looking for
 * Return: value associated with the element, or
 *	NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *item = ht->array[index];

	if (ht == NULL || ht->size == 0)
		return (NULL);
	for (item = ht->array[index]; item != NULL; item = item->next)
	{
		if (strcmp(item->key, key) == 0)
		{
			return (item->value);
		}
	}
	return (NULL);
}
