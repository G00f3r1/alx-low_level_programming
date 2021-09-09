#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @str: to access the string
 * Return: str
 */

char *leet(char *str)
{
	int len = 0;
	int i;
	char arr[] = {'4', '3', '0', '7', '1'};
	char rep[] = {'A', 'E', 'O', 'T', 'L'};

	while (str[len] != '\0')
	{
		for (i = 0; i <= len; i++)
		{
			if (str[i] == rep[i] || str[i] == rep[i] + 32)
			{
				str[i] = arr[i];
			}
		}
		len++;
	}


	return (str);
}
