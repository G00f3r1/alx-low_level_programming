#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item = NULL;
	hash_node_t *tmp = NULL;

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			tmp = item->next;
			free(item->key);
			free(item->value);
			free(item);
			item = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
