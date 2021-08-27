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
	for (char i = '0';i <= '9';i++){
		putchar(i);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
