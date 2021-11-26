#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

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
