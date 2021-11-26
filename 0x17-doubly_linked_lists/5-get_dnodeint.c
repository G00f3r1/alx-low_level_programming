#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h);

/**
 * get_dnodeint_at_index - Entry point
 * @head: head of the DLL to find node in.
 * @index: index of where the node should be.
 * Return: index of where the node is, or NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;
	unsigned int len;

	if (temp == NULL)
		return (NULL);
	len = dlistint_len(head);
	if (len < index)
		return (NULL);
	while (index > i)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
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
