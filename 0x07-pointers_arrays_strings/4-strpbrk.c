#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to search from
 * @accept: the string to search for
 * Return: occ
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	char *occ = NULL;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				occ = &s[--i];
				break;
			}
			else
				s++;
			j++;
		}
		i++;
	}
	return (occ);
}
