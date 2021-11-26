#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - inserts a node at the end of the DLL
 * @head: head of list to append node too.
 * @n: value of new node to add to list.
 * Return: address of new element or NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		new->n = n;
		new->prev = temp;
		new->next = NULL;
		temp->next = new;
	}
	return (*head);
}
