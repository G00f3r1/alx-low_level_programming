#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: the list
 * @str: the string to be added at the end of the list
 * Return: the new list with the new added value
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
		return (temp);
	}

	return (new);
}
