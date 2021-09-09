#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: to access the first string
 * @s2: to access the first string
 * Return: deff
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len = 0;
	int deff = 0;

	while (s1[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (s1[i] != s2[i])
		{
			deff = s1[i] - s2[i];
			break;
		}
	}

	return (deff);
}
