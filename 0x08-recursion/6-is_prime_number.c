#include "main.h"

int is_prime(int n, int i);


/**
 * is_prime_number - check if a number is a Prime or not
 * @n: used to pass the number
 * Return: if prime 1 if not 0
 */

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
 * is_prime - checker function for is_prime_number
 * @n: the number to be checked
 * @i: testing value
 * Return: if prime 1 if not 0
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (is_prime(n, i + 1));
}
