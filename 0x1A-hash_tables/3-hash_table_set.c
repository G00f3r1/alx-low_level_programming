#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key.
 * Return: Returns: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *collision = NULL;
	char *key_dup = NULL, *value_dup = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (!strlen(key))
		return (0);
	key_dup = strdup(key);
	value_dup = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	if (key_dup == NULL || value_dup == NULL)
	{
		free(key_dup);
		free(value_dup);
		return (0);
	}
	new_node = new_pair(new_node, key_dup, value_dup);
	if ((ht->array)[index] != NULL)
	{
		collision = (ht->array)[index];
		while (collision)
		{
			if (strcmp(collision->key, key_dup) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = value_dup;
				free(key_dup);
				free(new_node);
				return (1);
			}
			collision = collision->next;
		}
		collision = ht->array[index];
		new_node->next = collision;
		ht->array[index] = new_node;
	}
	else
		ht->array[index] = new_node;
	return (1);
}

/**
 * new_pair - function that create value pairs.
 * @new_node: the node that holds the value pair
 * @key: the key
 * @value: the value
 * Return: the created node or NULL if something went wrong
 */

hash_node_t *new_pair(hash_node_t *new_node, char *key, char *value)
{
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
	{
		free(key);
		free(value);
		return (0);
	}
	new_node->key = key;
	new_node->value = value;
	new_node->next = NULL;

	return (new_node);
}
