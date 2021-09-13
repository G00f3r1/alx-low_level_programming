#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to search from
 * @accept: the string to search for
 * Return: occ
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *occ = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				occ = &s[i];
				break;
			}
		}
	}

	return (occ);
}
