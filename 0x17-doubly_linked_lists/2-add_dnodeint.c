#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - inserts a node to the head of a DLL
 * @head: head of list to add node too
 * @n: value of node to be added
 * Return: address of new element or NULL if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
