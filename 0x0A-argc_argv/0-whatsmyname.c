#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);

	return (0);
}
