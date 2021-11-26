#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in DLL
 * @head: first node of the linked list to count
 * Return: sum of all data, or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (temp->next)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}
