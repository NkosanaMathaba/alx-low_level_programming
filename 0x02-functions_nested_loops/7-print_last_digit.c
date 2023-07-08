#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @num: inter used to extract last digit
 *
 * Return: num
 */

int print_last_digit(int num)
{
	int x = num % 10;

	if (x < 0)
	{
		x *= -1;
	}
	_putchar(x + '0');
	return (x);
}
