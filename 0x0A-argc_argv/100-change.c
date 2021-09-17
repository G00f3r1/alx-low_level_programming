#include <stdio.h>
#include <stdlib.h>

int coin_count(int number);

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[2] < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		number = atoi(argv[1]);
		printf("%d\n", coin_count(number));
	}

	return (0);
}

/**
 * coin_count - counts the number of coins.
 * @number: the amount given
 * Return: the number of coins
 */

int coin_count(int number)
{
	int i = 0;

	while (number > 0)
	{
		if (number >= 25)
		{
			number -= 25;
			i++;
		}
		else if (number >= 10)
		{
			number -= 10;
			i++;
		}
		else if (number >= 5)
		{
			number -= 5;
			i++;
		}
		else if (number >= 2)
		{
			number -= 2;
			i++;
		}
		else
		{
			number -= 1;
			i++;
		}
	}
	return (i);
}
