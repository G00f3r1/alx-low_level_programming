#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h);
/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: head of list to delete node from.
 * @index: index to delete node at.
 * Return: 1 if node was successfully delete, -1 if function failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;
	unsigned int len = dlistint_len(*head);

	if (head == NULL || *head == NULL)
		return (-1);
	if (len < index)
		return (-1);
	if (index == 0)
	{
		if (head == NULL || *head == NULL)
			return (-1);

		*head = temp->next;
		temp->next->prev = NULL;
		temp->next = NULL;
		temp->prev = NULL;
		free(temp);
		return (1);
	}
	else
	{
		len = dlistint_len(*head);
		while (index > i)
		{
			temp = temp->next;
			i++;
		}

		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
		temp->next = NULL;
		temp->prev = NULL;
		free(temp);
		return (1);
	}

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
