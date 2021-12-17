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
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL || ht->size == 0 || key == NULL
			|| *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];
	if (item == NULL || index >= ht->size)
		return (NULL);
	while (item != NULL && strcmp(item->key, key) != 0)
	{
		item = item->next;
	}
	if (item == NULL)
		return (NULL);
	return (item->value);
}
