#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees up a DLL
 * @head: head of list to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);

	}
}
