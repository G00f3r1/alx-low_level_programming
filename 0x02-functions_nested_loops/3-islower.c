#include "holberton.h"
/**
 * _islower - Checks for lowercase character.
 * @c: value have to be passed to the function _islower
 * Return: 1 if it's lowercase or 0 if it's upercase.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
