#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @str: to access the string
 * Return: str
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char rep[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char alph[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (alph[j] == str[i])
				str[i] = rep[j];
			j++;
		}
		i++;
	}

	return (str);
}
