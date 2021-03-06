#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 * Return: Returns a pointer to the newly created hash table
 *	or NULL If something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;

	if (!size)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	new_table->size = size;

	if (new_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}
