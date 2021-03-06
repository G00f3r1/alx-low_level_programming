#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the second string length
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	string = malloc(sizeof(char) * (len1 + n + 1));
	if (string == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	string[i] = '\0';

	return (string);
}
