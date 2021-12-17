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

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			item = ht->array[i];

			while (item)
			{
				printf("'%s': '%s'", item->key, item->value);
				if (item->next)
					printf(", ");
				item = item->next;
			}
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
