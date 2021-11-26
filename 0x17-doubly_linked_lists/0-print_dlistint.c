#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint -prints all elements of a dlinkedlist
 * @h: head of LL to print
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
