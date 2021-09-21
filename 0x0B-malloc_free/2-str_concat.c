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
	int k = 0;
	int com_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	com_len = i + j;
	ptr = malloc(sizeof(char) * com_len + 1);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (k < com_len)
	{
		if (k <= i)
			ptr[k] = s1[k];
		if (k >= i)
		{
			ptr[k] = s2[j];
			j++;
		}
		k++;
	}
	ptr[k] = '\0';

	return (ptr);
}
