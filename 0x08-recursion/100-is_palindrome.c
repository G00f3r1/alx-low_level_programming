#include "main.h"
#include <string.h>

int check(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: used to pass the string
 * Return: if palindrome 1 if not 0
 */

int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);
	return (check(s));
}

/**
 * check - checker for is_palindrome
 * @s: used to pass the string
 * Return: if palindrome 1 if not 0
 */

int check(char *s)
{
	int len = srtlen(s) - 1;

	if (*s == s[len])
	{
		s++;
		len--;
	}
	else
	{
		return (0);
	}
	return (1);
}
