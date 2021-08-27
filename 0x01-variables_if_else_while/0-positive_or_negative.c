#include <stdlib.h>
#include <time.h>
/**
 * main - is the first function to be excuted
 *
 * it compute a rondom  number if it is a positive, negative or zero
 *
 * Return: 0 (if sucessful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");
	return (0);
}
