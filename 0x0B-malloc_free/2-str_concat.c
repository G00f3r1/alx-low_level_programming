#include "main.h"
#include <stdlib.h>

/**
 * str_concat- concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int j = 0;

	if (s1 == NULL || s2 == NULL)
		return ("");

	else
	{
		ptr = malloc(sizeof(s1) + sizeof(s2));

		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			ptr[i] = s2[j];
			j++;
			i++;
		}
	}
	return (ptr);
}
