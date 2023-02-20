#include <stdio.h>

/**
 * main - Program that prints all possible combinations
 * of single digits.
 * Return: Always (0) Success
 */

int main(void)
{
	int n;
	int com = ',';

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
		putchar(com);
		putchar('\t');
	}
	putchar('\n');
	return (0);
}
