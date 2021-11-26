#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h);

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the DDL to insert new node into.
 * @idx: index to insert node into.
 * @n: data of new node to insert.
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int len = dlistint_len(*h);
	unsigned int i = 0;

	if (!new)
		return (NULL);
	if (!h)
		return (NULL);
	if (len < idx)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	while (idx > i + 1)
	{
		temp = temp->next;
		i++;
	}

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;

	return (*h);
}

/**
 * dlistint_len -returns number of elements in DLL
 * @h: pointer to head of DLL to count
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
