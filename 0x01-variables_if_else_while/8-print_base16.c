#include <stdio.h>

/**
 * main - Program prints all numbers of base 16,
 * all in lowercase
 * Return: Always (0) Success
 */

int main(void)
{
	int num;
	char let;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	for (let = 'a'; let < 'g'; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
