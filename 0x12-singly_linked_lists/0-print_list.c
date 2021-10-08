#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: the list to be printed
 * Return: the number of elements in the list
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	count++;
	}

	return (count);
}
