#include <stdio.h>

/**
 * main - prints numbers of base 10
 *
 * Return: Success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
