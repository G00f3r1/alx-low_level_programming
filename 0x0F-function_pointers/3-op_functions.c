#include "3-calc.h"

/**
 * op_add - function that add to numbers
 * @a: the first number
 * @b: the second number
 * Return: the result of the addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substract to numbers
 * @a: the first number
 * @b: the second number
 * Return: the result of the subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multipli to numbers
 * @a: the first number
 * @b: the second number
 * Return: the result of the multiplcation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divid a number
 * @a: the first number
 * @b: the second number
 * Return: the result of the divition
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that finds the remainder
 * @a: the first number
 * @b: the second number
 * Return: retuns the remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
