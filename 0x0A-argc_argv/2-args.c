#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i <= argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
