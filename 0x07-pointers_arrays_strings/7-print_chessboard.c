#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: the bord values
 * Retrun: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			printf("%c", a[i][j]);
			j++;
		}
		printf("\n");
		i++;

	}
}
