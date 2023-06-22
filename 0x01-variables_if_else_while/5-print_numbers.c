#include <stdio.h>

/**
 * main - prints all single digits
 * 
 * @num: numbers to be printed
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');

	return (0);
}
