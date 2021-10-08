#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: the list
 * @str: the string that is to be added to the list
 * Return: the list with the added value.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
