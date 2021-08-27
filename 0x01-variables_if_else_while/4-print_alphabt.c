#include <stdio.h>
/**
 * main - is the function that will execute first
 *
 *
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	for (char i = 'a';i <= 'z';i++){
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
