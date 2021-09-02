#include <stdio.h>
/**
 * main - check for multiples of 3 and 5.
 *
 * Return: 0 always
 */
int main(void)
{
	int x = 1024;
	int i;
	int sum = 0;

	for (i = 0; i < x; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
		sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
