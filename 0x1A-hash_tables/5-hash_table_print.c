#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *item = NULL;
	int flag = 0;

	printf("{");
	while (i < ht->size)
	{
		item = ht->array[i];
		while (item)
		{
			printf("'%s': '%s'", item->key, item->value);
			if (item->next)
				printf(", ");
			item = item->next;
		}
		while (!(ht->array[i + 1]))
			i++;

		if (flag && i < ht->size)
			printf(", ");
		else
			flag = 1;
		i++;
	}
	printf("}\n");
}
