#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that prints the opcodes of its own main function.
  * @argc: the number of argiuments
  * @argv: element of the arguments
  *
  * Return: 0 if successful
  */
int main(int argc, char *argv[])
{
	int count, bytes;

	if (argc == 2)
	{
		bytes = atoi(argv[1]);
		if (bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}

		count = 0;
		while (count < bytes)
		{
			printf("%02hhx", *((char *)main + count));
			if (count  < bytes - 1)
			{
				printf(" ");
			}
			else
			{
				printf("\n");
			}
			count++;
		}
	}
	else
	{
		printf("Error\n");
		exit(1);
	}

	return (0);
}
