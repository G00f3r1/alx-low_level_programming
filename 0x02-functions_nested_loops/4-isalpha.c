#include "holberton.h"

/**
 * _islower - Checks for alphabetic character.
 * @c: value have to be passed to the function _islower
 * Return: 1 if it's lowercase or upercase and 0 if it's otherwise.
 */

int _islower(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
