#include "3-calc.h"

/**
 * main - used to initiate other functions
 * @argc: the number of argiuments
 * @argv: element of the arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int num1;
		int num2;
		int (*operator)(int, int);
		int calc;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = get_op_func(argv[2]);
		if (operator == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		calc = operator(num1, num2);
		printf("%d\n", calc);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
