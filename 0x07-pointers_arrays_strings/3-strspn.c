#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: the full string
 * @accept: the bytes to be checked
 * Return: match
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, count1, match = 0;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] != 32)/* check for spaces */
		{
			count1 = 0;
			while (accept[count1] != '\0')
			{
				if (accept[count1] == s[count])
				{
					/* increment if mathc is found */
					match = match + 1;
				}
				count1++;
			}
		}
		else
			return (match);

		count++;
	}
	return (match);
}
