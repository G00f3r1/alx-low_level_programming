#include "main.h"

/**
 * main - Entery point. 
 *
 * Return: 0 (if successful)
 */

int main(void)
{
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ",i);
		}
	}
	return (0);
}
